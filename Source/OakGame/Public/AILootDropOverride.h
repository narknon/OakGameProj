#pragma once
#include "CoreMinimal.h"
#include "AILootDropOverride.generated.h"

class ULootSpawnPatternData;

USTRUCT(BlueprintType)
struct FAILootDropOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bOverrideDropPattern: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOverrideSocketName: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisabledByDefault: 1;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    ULootSpawnPatternData* OverrideDropPattern;
    
    OAKGAME_API FAILootDropOverride();
};

