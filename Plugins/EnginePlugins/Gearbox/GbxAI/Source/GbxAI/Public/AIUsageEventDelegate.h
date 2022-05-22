#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIUsageEventDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAIUsageEvent, AActor*, User, AActor*, SmartObject, FGameplayTag, ActionTag);

