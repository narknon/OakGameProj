#pragma once
#include "CoreMinimal.h"
#include "AbilityTreeItem.generated.h"

class UOakPlayerAbilityTree;
class UOakPlayerAbilityTreeItemData;

USTRUCT(BlueprintType)
struct FAbilityTreeItem {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UOakPlayerAbilityTree* Owner;
    
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeItemData* ItemData;
    
    OAKGAME_API FAbilityTreeItem();
};

