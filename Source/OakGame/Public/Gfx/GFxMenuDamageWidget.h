#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxMenuDamageWidget.generated.h"

UCLASS()
class OAKGAME_API UGFxMenuDamageWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float SplitScreenOffsetY;
    
public:
    UGFxMenuDamageWidget();
};

