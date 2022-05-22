#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAnimInstanceProxy.h"
#include "IronBearAnimInstanceProxy_FirstPerson.generated.h"

USTRUCT()
struct FIronBearAnimInstanceProxy_FirstPerson : public FOakPlayerAnimInstanceProxy {
    GENERATED_BODY()
public:
    OAKGAME_API FIronBearAnimInstanceProxy_FirstPerson();
};

