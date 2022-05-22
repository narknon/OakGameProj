#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "OakActionAbilityAugmentData.generated.h"

class UOakActionAbilityAugmentData;
class UUIStatData;

UCLASS(BlueprintType)
class UOakActionAbilityAugmentData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FLinearColor BarColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIStatData*> StatDataItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bIsMutuallyExclusive;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TArray<UOakActionAbilityAugmentData*> SupportedMods;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bIsAlwaysAvailable;
    
public:
    UOakActionAbilityAugmentData();
};

