#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspectSettings_FindClosestPlayer.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_FindClosestPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOnlyRunIfKeyIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bClearKeyOnStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpdatePeriod;
    
    UPROPERTY()
    bool bIsInternal;
    
    FAIAspectSettings_FindClosestPlayer();
};

