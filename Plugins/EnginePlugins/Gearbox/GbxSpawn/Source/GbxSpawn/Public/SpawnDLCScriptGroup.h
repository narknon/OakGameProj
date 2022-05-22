#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "SpawnerSoftPath.h"
#include "SpawnDLCScriptGroup.generated.h"

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnDLCScriptGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Description;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MaximumScriptedSpawnersPerGroupOverride;
    
    UPROPERTY()
    TArray<FSpawnerSoftPath> SpawnerSoftPaths;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysEnabledDuringEvent;
    
    FSpawnDLCScriptGroup();
};

