#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuSwitcher.h"
#include "OakMenuSwitcherTest.generated.h"

class UGbxGFxObject;

UCLASS()
class OAKGAME_API UOakMenuSwitcherTest : public UGbxGFxMenuSwitcher {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* TabWidget;
    
public:
    UOakMenuSwitcherTest();
};

