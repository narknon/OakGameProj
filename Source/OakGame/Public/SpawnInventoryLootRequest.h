#pragma once
#include "CoreMinimal.h"
#include "SelectedInventoryInfo.h"
#include "ELootInstancingPolicy.h"
#include "SpawnInventoryLootRequest.generated.h"

class AOakPlayerController;
class AActor;

USTRUCT()
struct OAKGAME_API FSpawnInventoryLootRequest {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* ContextActor;
    
    UPROPERTY()
    TArray<FSelectedInventoryInfo> SelectedInventoryInfos;
    
    UPROPERTY()
    ELootInstancingPolicy InstancingPolicy;
    
    UPROPERTY()
    AOakPlayerController* PlayerToInstanceFor;
    
    FSpawnInventoryLootRequest();
};

