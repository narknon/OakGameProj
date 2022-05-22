#pragma once
#include "CoreMinimal.h"
#include "LootablePersistenceData.generated.h"

USTRUCT(BlueprintType)
struct FLootablePersistenceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ResetDelay;
    
    UPROPERTY(EditAnywhere)
    bool bStoreInSaveGame;
    
    OAKGAME_API FLootablePersistenceData();
};

