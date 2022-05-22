#pragma once
#include "CoreMinimal.h"
#include "SplineFollowerEventDelegate.generated.h"

class USplineFollowerComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSplineFollowerEvent, USplineFollowerComponent*, SplineFollowerComponent, AActor*, SplineFollowerOwner);

