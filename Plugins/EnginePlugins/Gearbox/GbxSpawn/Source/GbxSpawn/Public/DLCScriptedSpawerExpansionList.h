#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "SpawnDLCScriptGroup.h"
#include "DLCScriptedSpawerExpansionList.generated.h"

UCLASS()
class GBXSPAWN_API UDLCScriptedSpawerExpansionList : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FSpawnDLCScriptGroup> ScriptedSpawners;
    
    UDLCScriptedSpawerExpansionList();
};

