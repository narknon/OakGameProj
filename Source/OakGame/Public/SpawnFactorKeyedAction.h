#pragma once
#include "CoreMinimal.h"
#include "DataActionPair_Spawn.h"
#include "DataActionPair_SpawnMesh.h"
#include "DataActionPair_SmartObject.h"
#include "SpawnFactorKeyedAction.generated.h"

USTRUCT(BlueprintType)
struct FSpawnFactorKeyedAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bOverrideKeyedActionList;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataActionPair_Spawn> SpawnKeyedActionList;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataActionPair_SpawnMesh> SpawnMeshKeyedActionList;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataActionPair_SmartObject> SmartObjectKeyedActionList;
    
    OAKGAME_API FSpawnFactorKeyedAction();
};

