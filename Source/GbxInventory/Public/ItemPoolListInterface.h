#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ItemPoolListInterface.generated.h"

class UItemPoolPartSelectionOverrideData;

UCLASS(Abstract, BlueprintType)
class GBXINVENTORY_API UItemPoolListInterface : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UItemPoolPartSelectionOverrideData*> PartSelectionOverrides;
    
public:
    UItemPoolListInterface();
};

