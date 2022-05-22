#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AssetTrait.generated.h"

class UAssetTrait;

UCLASS(Abstract, BlueprintType)
class UAssetTrait : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAssetTrait* TraitToWhitelist;
    
    UAssetTrait();
};

