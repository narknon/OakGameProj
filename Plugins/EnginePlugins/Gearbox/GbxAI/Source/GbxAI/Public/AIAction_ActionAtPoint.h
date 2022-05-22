#pragma once
#include "CoreMinimal.h"
#include "AIAction_GoToPoint.h"
#include "AIAspectSettings_GbxAction.h"
#include "AIAspectSettings_Rotation.h"
#include "AIAction_ActionAtPoint.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_ActionAtPoint : public UAIAction_GoToPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_GbxAction ActionSettings;
    
    UPROPERTY(EditAnywhere)
    bool bCheckLocationDuringAction;
    
    UPROPERTY(EditAnywhere)
    bool bUseRotationDuringAction;
    
    UPROPERTY(EditAnywhere)
    bool bUseRotationTargetDuringAction;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Rotation ActionRotationSettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseActionRotation;
    
private:
    UPROPERTY()
    uint8 ActionAtPointVersion;
    
public:
    UAIAction_ActionAtPoint();
};

