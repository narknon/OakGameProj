#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "NavAnimDesiredInfo.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FNavAnimDesiredInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Yaw;
    
    UPROPERTY()
    FVector_NetQuantize FaceLoc;
    
    FNavAnimDesiredInfo();
};

