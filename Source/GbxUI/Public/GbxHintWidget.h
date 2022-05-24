#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GbxHintInfo.h"
#include "GbxHintWidget.generated.h"

class AGbxPlayerController;
class UGbxHintBar;

UINTERFACE(Blueprintable)
class GBXUI_API UGbxHintWidget : public UInterface {
    GENERATED_BODY()
};

class GBXUI_API IGbxHintWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HintWidgetSetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HintWidgetSetInfo(const FGbxHintInfo& HintInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HintWidgetInitOwnerInfo(UGbxHintBar* HintBarOwner, const AGbxPlayerController* PlayerControllerContext);
    
};

