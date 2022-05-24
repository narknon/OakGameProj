#pragma once
#include "CoreMinimal.h"
#include "MantleTraceInputs.generated.h"

class UWorld;
class UMantleData;
class AActor;
class UGbxGameplayGlobals;

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

