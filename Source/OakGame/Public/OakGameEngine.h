#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "OakGameEngine.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UOakGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UOakGameEngine();
};

