#pragma once
#include "CoreMinimal.h"
#include "ItemPoolInfo.h"
#include "CharacterItemPoolExpansionInfo.generated.h"

class UItemPoolExpansionData;

USTRUCT(BlueprintType)
struct FCharacterItemPoolExpansionInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FItemPoolInfo> DropOnDeathItemPools;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UItemPoolExpansionData>> ItemPoolExpansions;
    
public:
    OAKGAME_API FCharacterItemPoolExpansionInfo();
};

