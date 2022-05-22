#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedJumpParams.generated.h"

USTRUCT()
struct FReplicatedJumpParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bStarted;
    
    UPROPERTY()
    FVector EndLoc;
    
    UPROPERTY()
    FVector TargetVel;
    
    GBXAI_API FReplicatedJumpParams();
};

