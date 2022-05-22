#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OakPlayerAbilityData.generated.h"

class UOakPlayerAbilityTreeData;
class UOakPlayerAbilitySlotData;

UCLASS()
class OAKGAME_API UOakPlayerAbilityData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UOakPlayerAbilityTreeData* AbilityTreeData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakPlayerAbilitySlotData*> PlayerAbilitySlots;
    
public:
    UOakPlayerAbilityData();
};

