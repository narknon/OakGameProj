#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UsableLookedAtSignatureDelegate.generated.h"

class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FUsableLookedAtSignature, APlayerController*, InstigatingPlayer, bool, bCanInteractWith, FVector, NewUsableComponentImpactPoint, float, NewUsableDistanceAway);

