#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "PlayerCharacterComponentSlotData.generated.h"

class UPlayerCharacterComponentAugmentData;

UCLASS(BlueprintType)
class OAKGAME_API UPlayerCharacterComponentSlotData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UPlayerCharacterComponentAugmentData*> SupportedAugments;
    
public:
    UPlayerCharacterComponentSlotData();
};

