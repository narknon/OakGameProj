#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "EAIActionResultDirective.h"
#include "AIAspectSettings_ActorCollision.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_ActorCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAIActionResultDirective OnCollision;
    
    FAIAspectSettings_ActorCollision();
};

