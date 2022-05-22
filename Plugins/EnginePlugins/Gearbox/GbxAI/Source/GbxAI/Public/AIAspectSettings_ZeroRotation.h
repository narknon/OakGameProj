#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_ZeroRotationChannel.h"
#include "AIAspectSettings_ZeroRotation.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_ZeroRotation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_ZeroRotationChannel Body;
    
    UPROPERTY(EditAnywhere)
    bool bUseBody;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_ZeroRotationChannel Aim;
    
    UPROPERTY(EditAnywhere)
    bool bUseAim;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_ZeroRotationChannel Look;
    
    UPROPERTY(EditAnywhere)
    bool bUseLook;
    
    FAIAspectSettings_ZeroRotation();
};

