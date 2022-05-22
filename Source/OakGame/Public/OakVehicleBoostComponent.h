#pragma once
#include "CoreMinimal.h"
#include "VehicleBoostComponent.h"
#include "Engine/EngineTypes.h"
#include "OakVehicleBoostComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakVehicleBoostComponent : public UVehicleBoostComponent {
    GENERATED_BODY()
public:
    UOakVehicleBoostComponent();
protected:
    UFUNCTION()
    void OnDamageCompOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

