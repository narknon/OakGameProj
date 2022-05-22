#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "GbxParam.h"
#include "SpawnDLCGroup.h"
#include "SpawnDLCScriptGroup.h"
#include "SpawnDLCData.generated.h"

class UDLCScriptedSpawerExpansionList;
class USpawnOptionData;
class USpawnDLCScript;

UCLASS()
class GBXSPAWN_API USpawnDLCData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<USpawnOptionData*, USpawnOptionData*> GlobalReplacement;
    
    UPROPERTY(EditAnywhere)
    bool bGlobalReplacementAlwaysEnabledDuringEvent;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnDLCGroup> SpawnerReplacements;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USpawnDLCScript> Script;
    
    UPROPERTY(EditAnywhere)
    bool bScriptGloballyReplacedSpawners;
    
    UPROPERTY(EditAnywhere)
    bool bScriptManuallyReplacedSpawners;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MaximumTotalEventEnemies;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MaximumEventEnemiesPerSpawner;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MaximumScriptedSpawnersPerGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnDLCScriptGroup> ScriptedSpawners;
    
    UPROPERTY(EditAnywhere)
    TArray<UDLCScriptedSpawerExpansionList*> ExpansionScriptedSpawners;
    
public:
    USpawnDLCData();
};

