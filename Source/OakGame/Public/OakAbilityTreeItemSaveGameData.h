#pragma once
#include "CoreMinimal.h"
#include "OakAbilityTreeItemSaveGameData.generated.h"

class UOakPlayerAbilityTreeItemData;

USTRUCT(BlueprintType)
struct FOakAbilityTreeItemSaveGameData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakPlayerAbilityTreeItemData> ItemAssetPath;
    
    UPROPERTY(EditAnywhere)
    int32 Points;
    
    UPROPERTY(EditAnywhere)
    int32 MaxPoints;
    
    UPROPERTY(EditAnywhere)
    int32 TreeIdentifier;
    
public:
    OAKGAME_API FOakAbilityTreeItemSaveGameData();
};

