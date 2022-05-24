#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxLobbyWidgetSettingWidget.generated.h"

class UGbxTextField;
class UGbxGFxMenu;

UCLASS(NonTransient)
class UGFxLobbyWidgetSettingWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxTextField* Label;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Icon;
    
    UPROPERTY()
    TWeakObjectPtr<UGbxGFxMenu> OwningMenu;
    
public:
    UGFxLobbyWidgetSettingWidget();
};

