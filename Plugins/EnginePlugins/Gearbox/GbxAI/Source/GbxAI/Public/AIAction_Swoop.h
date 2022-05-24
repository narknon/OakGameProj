#pragma once
#include "CoreMinimal.h"
#include "AIAction_Sequence.h"
#include "AIAspectSettings_Swoop.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAspectSettings_Rotation.h"
#include "AIAction_Swoop.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_Swoop : public UAIAction_Sequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Swoop SwoopSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Rotation MoveFarRotationSettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseFarRotation;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Rotation MoveNearRotationSettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseNearRotation;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Rotation MovePassRotationSettings;
    
    UPROPERTY(EditAnywhere)
    bool bUsePassRotation;
    
    UAIAction_Swoop();
};

