#pragma once
#include "CoreMinimal.h"
#include "BeastmasterPetEventSignatureDelegate.generated.h"

class AOakCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBeastmasterPetEventSignature, AOakCharacter*, Pet);

