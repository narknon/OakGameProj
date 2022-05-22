#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "NumericRange.h"
#include "AIAspectSettings_Follow.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_Follow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector FollowActorKey;
    
    UPROPERTY(EditAnywhere)
    FNumericRange TargetDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxSpeedScale;
    
    UPROPERTY(EditAnywhere)
    float MinSpeedScale;
    
    UPROPERTY(EditAnywhere)
    float GoalUpdatePeriod;
    
    UPROPERTY(EditAnywhere)
    float InvalidWaitPeriod;
    
    UPROPERTY(EditAnywhere)
    float TeleportWaitPeriod;
    
    UPROPERTY(EditAnywhere)
    bool bAllowTeleport;
    
    UPROPERTY(EditAnywhere)
    float TeleportDistance;
    
    UPROPERTY(EditAnywhere)
    bool bTeleportWhenFar;
    
    UPROPERTY(EditAnywhere)
    bool bContinueWhileClose;
    
    GBXAI_API FAIAspectSettings_Follow();
};

