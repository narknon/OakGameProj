#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "UObject/NoExportTypes.h"
#include "EStretchBonesActorTrackingStyle.h"
#include "StretchBonesSettings.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FStretchBonesSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bUniformStretch;
    
    UPROPERTY(EditDefaultsOnly)
    FGbxBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditDefaultsOnly)
    FVector TargetOffset;
    
    UPROPERTY(EditDefaultsOnly)
    EStretchBonesActorTrackingStyle ActorTrackingStyle;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTraceToGround;
    
    UPROPERTY(EditDefaultsOnly)
    float TraceToGroundDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxPredictionDistance;
    
    FStretchBonesSettings();
};

