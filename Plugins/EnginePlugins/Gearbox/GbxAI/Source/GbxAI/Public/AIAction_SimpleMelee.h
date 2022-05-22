#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIAction_ActionAtPoint.h"
#include "AIAspectSettings_GbxAction.h"
#include "GbxParam.h"
#include "EMeleeRotationOption.h"
#include "AIAction_SimpleMelee.generated.h"

class UGbxAction;

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_SimpleMelee : public UAIAction_ActionAtPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> MeleeAction;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_GbxAction MeleeActionSettings;
    
    UPROPERTY(EditAnywhere)
    bool bCanMove;
    
    UPROPERTY(EditAnywhere)
    FGbxParam ReachedHeight;
    
    UPROPERTY(EditAnywhere)
    FGbxParam ReachedDistance;
    
    UPROPERTY(EditAnywhere)
    EMeleeRotationOption FacingPolicyDuringAction;
    
    UPROPERTY(EditAnywhere)
    FGbxParam OverrideAngle;
    
    UPROPERTY(EditAnywhere)
    bool bUseOverrideAngle;
    
    UPROPERTY(EditAnywhere)
    bool bAlignBodyWithTarget;
    
    UPROPERTY(EditAnywhere)
    bool bKeepFacingTargetOnStop;
    
    UPROPERTY(EditAnywhere)
    bool bStopWhenReached;
    
    UPROPERTY(EditAnywhere)
    bool bCanStartWhenGoalIsUncertain;
    
    UPROPERTY(EditAnywhere)
    FGbxParam Count;
    
    UPROPERTY(EditAnywhere)
    FGbxParam PlayRate;
    
    UPROPERTY(EditAnywhere)
    bool bCanBeInterrupted;
    
    UPROPERTY()
    uint8 MeleeActionVersion;
    
public:
    UAIAction_SimpleMelee();
};

