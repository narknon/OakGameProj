#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior_BlendToFOV.h"
#include "CameraBehavior_MeleeFOV.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UCameraBehavior_MeleeFOV : public UCameraBehavior_BlendToFOV {
    GENERATED_BODY()
public:
    UCameraBehavior_MeleeFOV();
};

