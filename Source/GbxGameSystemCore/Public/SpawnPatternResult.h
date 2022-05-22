#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnPatternResult.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSpawnPatternResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector Location;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LinearImpulse;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLinearVelocityChange;
    
    UPROPERTY(BlueprintReadOnly)
    FVector AngularImpulse;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAngularVelocityChange;
    
    FSpawnPatternResult();
};

