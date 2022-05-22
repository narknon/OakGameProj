#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspectSettings_Route.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_Route {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector NodeKey;
    
    UPROPERTY(EditAnywhere)
    float SegmentDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxWanderingOffset;
    
    UPROPERTY()
    float ArrivalDistance;
    
    UPROPERTY(EditAnywhere)
    float PerchCooldown;
    
    UPROPERTY(EditAnywhere)
    bool bPassiveAction;
    
    UPROPERTY(EditAnywhere)
    bool bCombatAction;
    
    GBXAI_API FAIAspectSettings_Route();
};

