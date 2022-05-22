#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "OakChallengeTierRewards.generated.h"

class UItemPoolData;
class UOakCustomizationData;
class UWeaponSkinPartData;
class UWeaponTrinketPartData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakChallengeTierRewards {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData ExperienceReward;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData CashReward;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData EridiumReward;
    
    UPROPERTY(EditDefaultsOnly)
    UItemPoolData* RewardItemPool;
    
    UPROPERTY(EditAnywhere)
    TArray<UOakCustomizationData*> RewardCustomizations;
    
    UPROPERTY(EditAnywhere)
    TArray<UWeaponSkinPartData*> RewardWeaponSkins;
    
    UPROPERTY(EditAnywhere)
    TArray<UWeaponTrinketPartData*> RewardWeaponTrinkets;
    
    FOakChallengeTierRewards();
};

