#pragma once
#include "CoreMinimal.h"
#include "WeaponSkinSectionData.h"
#include "WeaponSkinWeaponTypeData.generated.h"

class UWeaponTypeData;

USTRUCT(BlueprintType)
struct FWeaponSkinWeaponTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWeaponTypeData* WeaponType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FWeaponSkinSectionData> Materials;
    
    OAKGAME_API FWeaponSkinWeaponTypeData();
};

