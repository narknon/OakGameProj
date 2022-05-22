#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SpawnPatternInputs.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSpawnPatternInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* SourceActor;
    
    UPROPERTY(BlueprintReadWrite)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite)
    FVector BaseLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator BaseRotation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector IncomingImpulse;
    
    FSpawnPatternInputs();
};

