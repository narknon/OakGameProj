#pragma once
#include "CoreMinimal.h"
#include "HitReactionPlayedDelegateDelegate.generated.h"

class AActor;
class UHitReactionTag;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHitReactionPlayedDelegate, AActor*, DamageReceiver, AActor*, DamageCauser, UHitReactionTag*, Tag);

