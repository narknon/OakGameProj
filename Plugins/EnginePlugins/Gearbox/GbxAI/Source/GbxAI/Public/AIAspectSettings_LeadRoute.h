#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "NumericRange.h"
#include "AIAspectSettings_LeadRoute.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_LeadRoute {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector LeadActorKey;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector DestinationNodeKey;
    
    UPROPERTY(EditAnywhere)
    float SegmentDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxWanderingOffset;
    
    UPROPERTY(EditAnywhere)
    float ArrivalDistance;
    
    UPROPERTY(EditAnywhere)
    FNumericRange TargetRouteDistance;
    
    UPROPERTY(EditAnywhere)
    FNumericRange SpeedScaleRange;
    
    UPROPERTY(EditAnywhere)
    float RouteOffsetFromTarget;
    
    UPROPERTY(EditAnywhere)
    float TeleportDist;
    
    UPROPERTY(EditAnywhere)
    bool bAllowBackwards;
    
    UPROPERTY(EditAnywhere)
    bool bAllowTeleport;
    
    UPROPERTY(EditAnywhere)
    float FindNavRadius;
    
    GBXAI_API FAIAspectSettings_LeadRoute();
};

