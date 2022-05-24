#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_EnvQuery.h"
#include "AIAspectSettings_Location.h"
#include "AIAction_Sequence.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspectSettings_Navigation.h"
#include "GbxParam.h"
#include "ECircleDirection.h"
#include "AIAspectSettings_Rotation.h"
#include "AIActionBlueprintDelegateDelegate.h"
#include "AIAction_GoToPoint.generated.h"

class UAITicketDataAsset;

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_GoToPoint : public UAIAction_Sequence {
    GENERATED_BODY()
public:
    UPROPERTY()
    FAIAspectSettings_Location LocationSettings;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector GoalKey;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseNavSettings;
    
    UPROPERTY(EditAnywhere)
    UAITicketDataAsset* MoveTicket;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MoveTicketHoldDuration;
    
    UPROPERTY(EditAnywhere)
    FGbxParam MoveFailTimeLimit;
    
    UPROPERTY(EditAnywhere)
    bool bUseMoveFailTimeLimit;
    
    UPROPERTY()
    FGbxBlackboardKeySelector QueryKey;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_EnvQuery QuerySettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseQuery;
    
    UPROPERTY(EditAnywhere)
    float MinOffsetInFrontOfTarget;
    
    UPROPERTY(EditAnywhere)
    float MaxOffsetInFrontOfTarget;
    
    UPROPERTY(EditAnywhere)
    float OffsetAngle;
    
    UPROPERTY(EditAnywhere)
    bool bUseOffsetInFrontOfTarget;
    
    UPROPERTY(EditAnywhere)
    float CirclingDistance;
    
    UPROPERTY(EditAnywhere)
    ECircleDirection Direction;
    
    UPROPERTY(EditAnywhere)
    bool bRotateAroundTarget;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector CustomRotationTarget;
    
    UPROPERTY(EditAnywhere)
    bool bUseCustomRotationTarget;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Rotation RotationSettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseRotation;
    
    UPROPERTY(EditAnywhere)
    bool bTestDirectPath;
    
    UPROPERTY(EditAnywhere)
    bool bDebugTestDirectPath;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FAIActionBlueprintDelegate OnArrivedEventBP;
    
private:
    UPROPERTY()
    uint8 GoToPointVersion;
    
public:
    UAIAction_GoToPoint();
};

