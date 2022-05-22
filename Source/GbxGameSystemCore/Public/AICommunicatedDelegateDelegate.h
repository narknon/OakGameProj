#pragma once
#include "CoreMinimal.h"
#include "AICommunicatedDelegateDelegate.generated.h"

class UGbxPerceptionComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAICommunicatedDelegate, UGbxPerceptionComponent*, Receiver, UGbxPerceptionComponent*, Source, AActor*, Target);

