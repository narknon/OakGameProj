#pragma once
#include "CoreMinimal.h"
#include "WeaponTriggerFireThreasholdData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponTriggerFireThreasholdData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Position;
    
    GBXWEAPON_API FWeaponTriggerFireThreasholdData();
};

