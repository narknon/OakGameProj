#pragma once
#include "CoreMinimal.h"
#include "OperativeDigicloneEventSignatureDelegate.generated.h"

class AOakCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOperativeDigicloneEventSignature, AOakCharacter*, Digiclone);

