#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxOutOfBoundsWarning.generated.h"

UCLASS()
class UGFxOutOfBoundsWarning : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UGFxOutOfBoundsWarning();
    UFUNCTION()
    void OnBoundaryWarningStateChanged(bool bWarningActive) const;
    
};

