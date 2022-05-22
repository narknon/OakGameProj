#pragma once
#include "CoreMinimal.h"
#include "ViewLeadingTranslationInfo.h"
#include "ViewLeadingRotationInfo.h"
#include "ViewLeadingInfo.generated.h"

USTRUCT(BlueprintType)
struct FViewLeadingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FViewLeadingTranslationInfo Translation;
    
    UPROPERTY(EditAnywhere)
    FViewLeadingRotationInfo Rotation;
    
    OAKGAME_API FViewLeadingInfo();
};

