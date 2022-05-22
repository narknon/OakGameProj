#pragma once
#include "CoreMinimal.h"
#include "PathSegmentSetting.h"
#include "AIAspectSettings_MovePath.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_MovePath {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName NodeTag;
    
    UPROPERTY()
    bool bAllowPathSegment;
    
    UPROPERTY(EditAnywhere)
    FPathSegmentSetting IntermediatePath;
    
    OAKGAME_API FAIAspectSettings_MovePath();
};

