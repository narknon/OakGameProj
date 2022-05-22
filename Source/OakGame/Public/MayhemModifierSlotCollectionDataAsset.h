#pragma once
#include "CoreMinimal.h"
#include "MayhemModifierSlotInterface.h"
#include "MayhemModifierSlotCollectionDataAsset.generated.h"

class UMayhemModifierSlotDataAsset;

UCLASS()
class OAKGAME_API UMayhemModifierSlotCollectionDataAsset : public UMayhemModifierSlotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UMayhemModifierSlotDataAsset*> Collection;
    
public:
    UMayhemModifierSlotCollectionDataAsset();
};

