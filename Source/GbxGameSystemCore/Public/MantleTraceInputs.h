#pragma once
#include "CoreMinimal.h"
#include "MantleTraceInputs.generated.h"

class UWorld;
class AActor;
class UGbxGameplayGlobals;
class UMantleData;

USTRUCT(BlueprintType)
struct FMantleTraceInputs {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UWorld* World;
    
    UPROPERTY(Transient)
    UMantleData* MantleData;
    
    UPROPERTY(Transient)
    UGbxGameplayGlobals* Globals;
    
    UPROPERTY(Transient)
    AActor* SourceActor;
    
    GBXGAMESYSTEMCORE_API FMantleTraceInputs();
};

