#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxGlobalsData.generated.h"

class UDamageGlobalsData;
class UStatusEffectGlobalsData;
class UGbxGameplayGlobals;
class UAssetMappingData;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxGlobalsData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UDamageGlobalsData> DamageGlobalsData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxGameplayGlobals* GameplayGlobals;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UStatusEffectGlobalsData> StatusEffectGlobals;
    
    UPROPERTY(EditDefaultsOnly)
    UAssetMappingData* AssetMapping;
    
public:
    UGbxGlobalsData();
};

