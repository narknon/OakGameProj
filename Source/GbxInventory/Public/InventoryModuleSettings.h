#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "InventoryModuleSettings.generated.h"

class ADroppedInventoryItemPickup;

UCLASS(DefaultConfig, Config=Game)
class GBXINVENTORY_API UInventoryModuleSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TSubclassOf<ADroppedInventoryItemPickup> DefaultDroppedPickupBlueprint;
    
    UPROPERTY(Config, EditAnywhere)
    float VeryShortLivedDropLifeSpan;
    
    UPROPERTY(Config, EditAnywhere)
    float ShortLivedDropLifeSpan;
    
    UPROPERTY(Config, EditAnywhere)
    float LongLivedDropLifeSpan;
    
    UPROPERTY(Config, EditAnywhere)
    float PickupShrinkDuration;
    
    UPROPERTY(Config, EditAnywhere)
    float ResetBumpOnPickupFailDelay;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FName> PickupFlyToTargets;
    
public:
    UInventoryModuleSettings();
};

