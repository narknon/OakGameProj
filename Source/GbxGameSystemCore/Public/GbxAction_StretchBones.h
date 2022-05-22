#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxAction_SimpleAnim.h"
#include "AnimActionDef.h"
#include "EStretchBonesActorTrackingStyle.h"
#include "StretchBonesSettings.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxAction_StretchBones.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_StretchBones : public UGbxAction_SimpleAnim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimActionDef StretchAnimation;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlot;
    
    UPROPERTY(EditAnywhere)
    FStretchBonesSettings StretchBonesSettings;
    
    UPROPERTY()
    bool bUniformStretch;
    
    UPROPERTY()
    FGbxBlackboardKeySelector TargetKey;
    
    UPROPERTY()
    FVector TargetOffset;
    
    UPROPERTY()
    EStretchBonesActorTrackingStyle ActorTrackingStyle;
    
    UPROPERTY()
    bool bTraceToGround;
    
    UPROPERTY()
    float TraceToGroundDistance;
    
    UPROPERTY()
    float MaxPredictionDistance;
    
    UGbxAction_StretchBones();
};

