#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakUIVirtualBackpack.generated.h"

UCLASS()
class OAKGAME_API UOakUIVirtualBackpack : public UObject {
    GENERATED_BODY()
public:
    UOakUIVirtualBackpack();
protected:
    UFUNCTION()
    void OnListScrollBarUpdated(float SliderPercentage);
    
};

