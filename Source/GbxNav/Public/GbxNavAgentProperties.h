#pragma once
#include "CoreMinimal.h"
#include "GbxNavPathingData.h"
#include "GbxNavAgentProperties.generated.h"

USTRUCT(BlueprintType)
struct FGbxNavAgentProperties {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGbxNavPathingData PathingData;
    
    GBXNAV_API FGbxNavAgentProperties();
};

