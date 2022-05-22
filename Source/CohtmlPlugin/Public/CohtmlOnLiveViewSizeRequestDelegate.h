#pragma once
#include "CoreMinimal.h"
#include "CohtmlOnLiveViewSizeRequestDelegate.generated.h"

class UCohtmlBaseComponent;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FourParams(FCohtmlOnLiveViewSizeRequest, UCohtmlBaseComponent*, compo, const FString&, Name, int32&, Width, int32&, Height);

