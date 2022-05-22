#pragma once
#include "CoreMinimal.h"
#include "GbxAnimInstanceProxy.h"
#include "GbxCharacterAnimInstanceProxy.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FGbxCharacterAnimInstanceProxy : public FGbxAnimInstanceProxy {
    GENERATED_BODY()
public:
    FGbxCharacterAnimInstanceProxy();
};

