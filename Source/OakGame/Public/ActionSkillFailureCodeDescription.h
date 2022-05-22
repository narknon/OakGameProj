#pragma once
#include "CoreMinimal.h"
#include "ActionSkillFailureCodeDescription.generated.h"

USTRUCT(BlueprintType)
struct FActionSkillFailureCodeDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 FailureCode;
    
    UPROPERTY(EditAnywhere)
    FText FailureCodeText;
    
    OAKGAME_API FActionSkillFailureCodeDescription();
};

