#pragma once
#include "CoreMinimal.h"
#include "OnUMGInWorldIconLifetimeExpiredDelegate.generated.h"

class UHUDInWorldIcon;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUMGInWorldIconLifetimeExpired, UHUDInWorldIcon*, InWorldIcon);

