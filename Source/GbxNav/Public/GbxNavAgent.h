#pragma once
#include "CoreMinimal.h"
#include "GbxNavAgentProperties.h"
#include "GbxNavAgent.generated.h"

class AGbxNavWorld;
class AActor;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxNavAgent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGbxNavAgentProperties Props;
    
    UPROPERTY()
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY()
    AActor* Context;
    
    FGbxNavAgent();
};

