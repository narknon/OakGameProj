#pragma once
#include "CoreMinimal.h"
#include "SplineFollowerReachedDistanceEventDelegate.generated.h"

class USplineFollowerComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSplineFollowerReachedDistanceEvent, USplineFollowerComponent*, SplineFollowerComponent, AActor*, SplineFollowerOwner, const FString&, CheckpointName);

