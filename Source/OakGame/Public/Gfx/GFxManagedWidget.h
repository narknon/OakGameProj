#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxManagedWidget.generated.h"

UCLASS()
class UGFxManagedWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UGFxManagedWidget();
protected:
    UFUNCTION()
    void extShowAnimationFinished() const;
    
};

