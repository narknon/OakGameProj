#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxComponentFractureSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FGbxComponentFractureSignature, const FVector&, FractureCentroid, const FVector&, HitDirection, float, FracturePercent, bool, bSilentFracture);

