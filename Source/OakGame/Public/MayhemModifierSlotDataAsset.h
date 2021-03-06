#pragma once
#include "CoreMinimal.h"
#include "MayhemModifierSlotInterface.h"
#include "MayhemModifierSet.h"
#include "MayhemModifierSlotDataAsset.generated.h"

UCLASS()
class OAKGAME_API UMayhemModifierSlotDataAsset : public UMayhemModifierSlotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FMayhemModifierSet> ModifierSets;
    
public:
    UMayhemModifierSlotDataAsset();
};

