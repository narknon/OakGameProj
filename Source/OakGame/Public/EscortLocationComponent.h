#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EscortLocationComponent.generated.h"

class UEscortLocationComponent;
class AActor;
class AOakVehicle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UEscortLocationComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float SnapToGroundDistance;
    
    UPROPERTY(Transient)
    AOakVehicle* Escorter;
    
    UPROPERTY()
    bool bSnapToGround;
    
public:
    UEscortLocationComponent();
    UFUNCTION(BlueprintCallable)
    void SetOccupation(AOakVehicle* Vehicle);
    
    UFUNCTION(BlueprintPure)
    bool IsOccupied() const;
    
    UFUNCTION(BlueprintCallable)
    static void InitEscort(AOakVehicle* Target, AActor* ActorToEscort, bool bUseNearest);
    
    UFUNCTION(BlueprintPure)
    static TArray<UEscortLocationComponent*> FindEscortLocation(AActor* ActorToEscort, bool bIsFree);
    
    UFUNCTION(BlueprintCallable)
    static UEscortLocationComponent* FindEscortComponent(AOakVehicle* Target, AActor* ActorToEscort, bool bUseNearest);
    
    UFUNCTION(BlueprintCallable)
    static void ClearEscortOccupation(AOakVehicle* Target);
    
};

