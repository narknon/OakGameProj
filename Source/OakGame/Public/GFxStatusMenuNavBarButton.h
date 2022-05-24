#pragma once
#include "CoreMinimal.h"
#include "GFxStatusMenuNavBarInfo.h"
#include "GbxGFxListCell.h"
#include "GFxStatusMenuNavBarButton.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxStatusMenuNavBarButton : public UGbxGFxListCell {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGFxStatusMenuNavBarInfo ButtonInfo;
    
    UGFxStatusMenuNavBarButton();
};

