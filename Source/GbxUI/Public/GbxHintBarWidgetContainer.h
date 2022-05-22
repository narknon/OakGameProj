#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GbxHintInfo.h"
#include "GbxHintBarWidgetContainer.generated.h"

class UGbxHintBar;
class AGbxPlayerController;

UINTERFACE(Blueprintable)
class GBXUI_API UGbxHintBarWidgetContainer : public UInterface {
    GENERATED_BODY()
};

class GBXUI_API IGbxHintBarWidgetContainer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HintBarSetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HintBarInitOwnerInfo(UGbxHintBar* HintBarOwner, const AGbxPlayerController* PlayerControllerContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HintBarClearAllHints();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HintBarAppendHint(const FGbxHintInfo& HintInfo);
    
};

