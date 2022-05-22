#pragma once
#include "CoreMinimal.h"
#include "ECoverUserAnimState.h"
#include "CoverStateDelegateDelegate.generated.h"

class UCoverStyleData;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FCoverStateDelegate, ECoverUserAnimState, State, UCoverStyleData*, Style, AActor*, Target);

