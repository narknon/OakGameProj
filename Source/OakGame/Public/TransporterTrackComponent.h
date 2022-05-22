#pragma once
#include "CoreMinimal.h"
#include "WeightedTransporterCrane.h"
#include "Components/ActorComponent.h"
#include "TransporterSingleCraneEventDelegate.h"
#include "TransporterTrackComponent.generated.h"

class ATransporterCrane;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTransporterTrackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FWeightedTransporterCrane> WeightedCranes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeBetweenCranes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeBetweenPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CarryingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    AActor* PickupLocation;
    
    UPROPERTY(EditAnywhere)
    bool bStartWithCranes;
    
private:
    UPROPERTY(Replicated)
    bool bReversed;
    
public:
    UPROPERTY(BlueprintAssignable)
    FTransporterSingleCraneEvent OnCraneBeginTrack;
    
    UPROPERTY(BlueprintAssignable)
    FTransporterSingleCraneEvent OnCraneReachedEnd;
    
    UPROPERTY(BlueprintAssignable)
    FTransporterSingleCraneEvent OnCraneReachedPickupPoint;
    
    UTransporterTrackComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void SetOverrideCrane(ATransporterCrane* NextCrane);
    
    UFUNCTION()
    void ReverseTrack();
    
    UFUNCTION(BlueprintCallable)
    void ResumeTrack();
    
    UFUNCTION(BlueprintCallable)
    void PauseTrack();
    
    UFUNCTION(BlueprintCallable)
    void ManualSpawnCrane(bool ResetTimer);
    
    UFUNCTION(BlueprintCallable)
    void EnableCranes(bool bEnable);
    
    UFUNCTION(BlueprintNativeEvent)
    void CraneReachedPickupPoint(ATransporterCrane* Crane);
    
    UFUNCTION(BlueprintNativeEvent)
    void CraneReachedEnd(ATransporterCrane* Crane);
    
    UFUNCTION(BlueprintNativeEvent)
    void CraneBeginTrack(ATransporterCrane* Crane);
    
};

