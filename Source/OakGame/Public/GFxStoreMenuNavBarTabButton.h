#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "EGFxStoreMenuTabType.h"
#include "GFxStoreMenuNavBarTabButton.generated.h"

class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxStoreMenuNavBarTabButton : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* IconClip;
    
    UPROPERTY(Transient)
    EGFxStoreMenuTabType TabType;
    
public:
    UGFxStoreMenuNavBarTabButton();
};

