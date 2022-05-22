#pragma once
#include "CoreMinimal.h"
#include "OnHUDInWorldIconLifetimeExpiredDelegate.generated.h"

class UGFxInWorldIcon;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHUDInWorldIconLifetimeExpired, UGFxInWorldIcon*, InWorldIcon);

