#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "CoverUseParams.h"
#include "AIAspectSettings_UseCover.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_UseCover {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector Target;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector Cover;
    
    UPROPERTY(EditAnywhere)
    FCoverUseParams UseParams;
    
    FAIAspectSettings_UseCover();
};

