#pragma once
#include "CoreMinimal.h"
#include "UsableUsedOnChannelSignatureDelegate.generated.h"

class AController;
class UPrimitiveComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUsableUsedOnChannelSignature, AController*, UserController, UPrimitiveComponent*, UsedComponent);

