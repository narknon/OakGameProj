#pragma once
#include "CoreMinimal.h"
#include "VehicleAnimInstance.h"
#include "OakVehicleAnimInstance.generated.h"

class UWheeledVehicleMovementComponentNW;
class AOakVehicle;
class UVehicleHoverComponent;
class UAnimSequenceBase;

UCLASS(NonTransient)
class OAKGAME_API UOakVehicleAnimInstance : public UVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY()
    AOakVehicle* OakVehicle;
    
    UPROPERTY(Export)
    UWheeledVehicleMovementComponentNW* WheeledComponent;
    
    UPROPERTY(Export)
    UVehicleHoverComponent* HoverComponent;
    
    UPROPERTY(EditAnywhere)
    FName GearShiftSlotName;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* GearShiftUp;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* GearShiftDown;
    
    UOakVehicleAnimInstance();
protected:
    UFUNCTION()
    void PlayGearShiftAnim(int32 Gear, bool bIsUpShifting);
    
    UFUNCTION()
    void OwnerPostBeginPlay();
    
};

