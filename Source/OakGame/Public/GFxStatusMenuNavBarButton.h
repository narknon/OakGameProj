#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxStatusMenuNavBarInfo.h"
#include "GFxStatusMenuNavBarButton.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxStatusMenuNavBarButton : public UGbxGFxListCell {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGFxStatusMenuNavBarInfo ButtonInfo;
    
    UGFxStatusMenuNavBarButton();
};

