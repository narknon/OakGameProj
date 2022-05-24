#pragma once
#include "CoreMinimal.h"
#include "VehicleSeatPawn.h"
#include "GbxBlackboardKeySelector.h"
#include "ESmartActionResult.h"
#include "GameplayTagContainer.h"
#include "VehicleGunnerSeatPawn.generated.h"

class USmartObjectComponent;
class AController;

UCLASS()
class AVehicleGunnerSeatPawn : public AVehicleSeatPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    USmartObjectComponent* GetInSmartObject;
    
    UPROPERTY(EditDefaultsOnly)
    FName SmartObjectComponentName;
    
    UPROPERTY(EditDefaultsOnly)
    FName GetInVehicleBlackboardKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    FName GetInVehicleSlotIndexBlackboardKeyName;
    
    UPROPERTY()
    FGbxBlackboardKeySelector GetInVehicleBlackboardKey;
    
    UPROPERTY()
    FGbxBlackboardKeySelector GetInVehicleSlotIndexBlackboardKey;
    
public:
    AVehicleGunnerSeatPawn();
protected:
    UFUNCTION()
    void OnActionUsageEnded(AController* UserController, FGameplayTag ActionTag, ESmartActionResult Result);
    
    UFUNCTION()
    void OnActionReserved(AController* UserController, FGameplayTag ActionTag);
    
};

