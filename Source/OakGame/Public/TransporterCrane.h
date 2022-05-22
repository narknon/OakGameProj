#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TransporterCraneRecord.h"
#include "TransporterCrane.generated.h"

class UTransporterTrackComponent;
class USplineFollowerComponent;
class USplineComponent;
class USkeletalMeshComponent;

UCLASS()
class ATransporterCrane : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    UTransporterTrackComponent* TransporterTrackComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    USplineFollowerComponent* SplineFollowerComponent;
    
    UPROPERTY(Export, ReplicatedUsing=OnRep_SplineComponent)
    USplineComponent* SplineComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    USkeletalMeshComponent* CraneMesh;
    
    UPROPERTY(ReplicatedUsing=OnRep_CraneRecord)
    FTransporterCraneRecord CraneRecord;
    
    UPROPERTY(Replicated)
    float ReplicatedCurrentPosition;
    
public:
    ATransporterCrane();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopTrackMovement();
    
    UFUNCTION()
    void SetTrackMovementDirection(bool bReversed);
    
    UFUNCTION(BlueprintCallable)
    void ResumeTrackMovement();
    
    UFUNCTION(BlueprintNativeEvent)
    void ReachedPickupPoint();
    
    UFUNCTION(BlueprintNativeEvent)
    void ReachedEnd();
    
private:
    UFUNCTION()
    void OnRep_SplineComponent();
    
    UFUNCTION()
    void OnRep_CraneRecord();
    
public:
    UFUNCTION()
    void OnReachedPickupPoint(USplineFollowerComponent* InSplineFollowerComponent, AActor* SplineFollowerOwner);
    
    UFUNCTION()
    void OnReachedEnd(USplineFollowerComponent* InSplineFollowerComponent, AActor* SplineFollowerOwner);
    
    UFUNCTION(BlueprintNativeEvent)
    void BeginTrack();
    
};

