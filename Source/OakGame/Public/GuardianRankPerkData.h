#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "GuardianRankPerkData.generated.h"

class UWeaponSkinPartData;
class UGbxAbility;
class UGuardianRankRewardCategoryData;
class UOakCustomizationData;

UCLASS()
class UGuardianRankPerkData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGuardianRankRewardCategoryData* PerkCategory;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FString PerkFrameName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAbility> PerkAbilityClass;
    
    UPROPERTY(EditAnywhere)
    TArray<UOakCustomizationData*> PerkCustomizations;
    
    UPROPERTY(EditAnywhere)
    TArray<UWeaponSkinPartData*> PerkWeaponSkins;
    
    UPROPERTY(EditAnywhere)
    int32 GuardianTokensForPerk;
    
    UPROPERTY(Transient)
    int32 CachedPerkIndex;
    
    UGuardianRankPerkData();
};

