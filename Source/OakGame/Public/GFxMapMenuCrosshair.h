#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxMapMenuCrosshair.generated.h"

class UGbxGFxProgressBar;

UCLASS(NonTransient)
class OAKGAME_API UGFxMapMenuCrosshair : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxProgressBar* ProgressFill;
    
    UGFxMapMenuCrosshair();
};

