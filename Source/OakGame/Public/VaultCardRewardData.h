#pragma once
#include "CoreMinimal.h"
#include "VaultCardRewardDataBase.h"
#include "VaultCardRewardData.generated.h"

class UOakCustomizationData;
class UWeaponSkinPartData;
class UWeaponTrinketPartData;
class UCrewQuartersDecorationItemData;

USTRUCT(BlueprintType)
struct FVaultCardRewardData : public FVaultCardRewardDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UOakCustomizationData*> VaultCardRewardCustomizations;
    
    UPROPERTY(EditAnywhere)
    UWeaponSkinPartData* VaultCardRewardWeaponSkin;
    
    UPROPERTY(EditAnywhere)
    UWeaponTrinketPartData* VaultCardRewardWeaponTrinket;
    
    UPROPERTY(EditAnywhere)
    UCrewQuartersDecorationItemData* VaultCardRewardQuartersDeco;
    
    OAKGAME_API FVaultCardRewardData();
};

