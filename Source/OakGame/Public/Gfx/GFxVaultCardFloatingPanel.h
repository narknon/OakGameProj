#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxVaultCardFloatingPanel.generated.h"

class UGbxGFxHintWidget;

UCLASS(NonTransient)
class OAKGAME_API UGFxVaultCardFloatingPanel : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxHintWidget* HintClip;
    
public:
    UGFxVaultCardFloatingPanel();
};

