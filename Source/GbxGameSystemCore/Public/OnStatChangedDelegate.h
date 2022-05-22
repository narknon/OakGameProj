#pragma once
#include "CoreMinimal.h"
#include "OnStatChangedDelegate.generated.h"

class AActor;
class UGameStatData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnStatChanged, AActor*, StatContext, UGameStatData*, GameStat, int32, IncrementAmount);

