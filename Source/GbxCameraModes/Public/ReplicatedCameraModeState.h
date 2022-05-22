#pragma once
#include "CoreMinimal.h"
#include "ReplicatedCameraModeState.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedCameraModeState {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ModeName;
    
    UPROPERTY()
    float BlendTimeOverride;
    
    GBXCAMERAMODES_API FReplicatedCameraModeState();
};

