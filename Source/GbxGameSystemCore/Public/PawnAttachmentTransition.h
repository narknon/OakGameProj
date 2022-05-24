#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EAttachmentTransitionTiming.h"
#include "PawnSceneAttachmentInfo.h"
#include "PawnAttachmentTransition.generated.h"

class UGbxAction;
class UGbxCondition;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPawnAttachmentTransition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> BaseAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> PawnAction;
    
    UPROPERTY(EditAnywhere)
    bool bForceStopTransitionActions;
    
    UPROPERTY(EditAnywhere)
    EAttachmentTransitionTiming AttachTiming;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAttachInfo;
    
    UPROPERTY(EditAnywhere)
    FPawnSceneAttachmentInfo AttachInfo;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Conditions;
    
    FPawnAttachmentTransition();
};

