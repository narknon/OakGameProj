#pragma once
#include "CoreMinimal.h"
#include "GbxCharacterAnimInstanceProxy.h"
#include "OakPlayerAnimInstanceProxy.generated.h"

USTRUCT()
struct FOakPlayerAnimInstanceProxy : public FGbxCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    OAKGAME_API FOakPlayerAnimInstanceProxy();
};

