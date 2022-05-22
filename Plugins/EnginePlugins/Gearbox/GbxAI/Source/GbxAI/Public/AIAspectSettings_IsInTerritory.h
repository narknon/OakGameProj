#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "ETerritoryType.h"
#include "AIAspectSettings_IsInTerritory.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_IsInTerritory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector GoalKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETerritoryType TerritoryArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeThreshold;
    
    FAIAspectSettings_IsInTerritory();
};

