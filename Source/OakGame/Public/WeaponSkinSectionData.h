#pragma once
#include "CoreMinimal.h"
#include "WeaponSkinSectionData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FWeaponSkinSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SectionIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UMaterialInterface> Material;
    
    OAKGAME_API FWeaponSkinSectionData();
};

