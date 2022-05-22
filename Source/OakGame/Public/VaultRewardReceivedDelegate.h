#pragma once
#include "CoreMinimal.h"
#include "EVaultRewardType.h"
#include "VaultRewardReceivedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVaultRewardReceived, EVaultRewardType, VaultRewardType);

