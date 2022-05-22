#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OakActionAbilityAugmentSlotData.generated.h"

class UOakActionAbilityAugmentSlotData;
class UOakActionAbilityAugmentData;

UCLASS(BlueprintType)
class UOakActionAbilityAugmentSlotData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    bool bUnlockedByPlayerLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    int32 LevelUnlock;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakActionAbilityAugmentData*> SupportedAugments;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    UOakActionAbilityAugmentSlotData* ParentSlotData;
    
public:
    UOakActionAbilityAugmentSlotData();
};

