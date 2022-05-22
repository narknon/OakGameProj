#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "OakInputEventHelpers.generated.h"

UCLASS(Abstract)
class OAKGAME_API UOakInputEventHelpers : public UObject {
    GENERATED_BODY()
public:
    UOakInputEventHelpers();
    UFUNCTION()
    void SigFunc_OakMoveLookAxis(const FVector& Val, bool bGamePad);
    
};

