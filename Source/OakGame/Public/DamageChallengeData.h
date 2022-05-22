#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageChallengeData.generated.h"

class UGbxDamageType;
class UWeaponTypeData;
class UManufacturerData;

USTRUCT(BlueprintType)
struct FDamageChallengeData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UWeaponTypeData* WeaponType;
    
    UPROPERTY(Transient)
    UManufacturerData* Manufacturer;
    
    UPROPERTY(Transient)
    TSubclassOf<UGbxDamageType> DamageTypeClass;
    
    OAKGAME_API FDamageChallengeData();
};

