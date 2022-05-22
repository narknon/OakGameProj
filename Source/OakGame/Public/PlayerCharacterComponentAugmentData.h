#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "PlayerCharacterComponentAugmentData.generated.h"

class UUIStatData;

UCLASS(BlueprintType)
class UPlayerCharacterComponentAugmentData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Export, meta=(AllowPrivateAccess=true))
    TArray<UUIStatData*> StatDataItems;
    
public:
    UPlayerCharacterComponentAugmentData();
};

