#pragma once
#include "CoreMinimal.h"
#include "PawnSlotAttachDelegateDelegate.generated.h"

class AController;
class APawn;

UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPawnSlotAttachDelegate, APawn*, Pawn, AController*, Controller);

