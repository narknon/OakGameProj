#pragma once
#include "CoreMinimal.h"
#include "TargetQueryDebugDesc.generated.h"

class AActor;
class UTeam;

USTRUCT()
struct FTargetQueryDebugDesc {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString DebugGroup;
    
    UPROPERTY()
    AActor* Actor;
    
    UPROPERTY()
    UTeam* Team;
    
    UPROPERTY()
    float Score;
    
    UPROPERTY()
    FString FailReason;
    
    GBXGAMESYSTEMCORE_API FTargetQueryDebugDesc();
};

