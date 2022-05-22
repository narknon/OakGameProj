#pragma once
#include "CoreMinimal.h"
#include "AnimActionDef.h"
#include "ExtraAnimationSettings.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FExtraAnimationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName SkeletalMeshComponentName;
    
    UPROPERTY(EditAnywhere)
    FAnimActionDef AnimDef;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlotOverride;
    
    UPROPERTY(EditAnywhere)
    bool bHasAnimSlotOverride;
    
    FExtraAnimationSettings();
};

