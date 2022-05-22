#pragma once
#include "CoreMinimal.h"
#include "EIrrelevantAction.h"
#include "ESpawnerCritical.h"
#include "ERespawnStyle.h"
#include "SpawnDetails.generated.h"

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnDetails {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ESpawnerCritical Critical;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCritical;
    
    UPROPERTY(EditAnywhere)
    ERespawnStyle RespawnStyle;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideRespawnStyle;
    
    UPROPERTY(EditAnywhere)
    EIrrelevantAction IrrelevantAction;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideIrrelevantAction;
    
    UPROPERTY()
    bool bCritical;
    
    FSpawnDetails();
};

