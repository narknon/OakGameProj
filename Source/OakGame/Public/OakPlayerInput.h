#pragma once
#include "CoreMinimal.h"
#include "GbxPlayerInput.h"
#include "OakPlayerInput.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UOakPlayerInput : public UGbxPlayerInput {
    GENERATED_BODY()
public:
    UOakPlayerInput();
};

