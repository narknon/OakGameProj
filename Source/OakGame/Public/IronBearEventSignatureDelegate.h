#pragma once
#include "CoreMinimal.h"
#include "IronBearEventSignatureDelegate.generated.h"

class AOakCharacter_IronBear;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIronBearEventSignature, AOakCharacter_IronBear*, IronBear);

