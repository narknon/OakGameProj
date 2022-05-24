#pragma once
#include "CoreMinimal.h"
#include "GbxFocusableWidgetInfo.h"
#include "UObject/Object.h"
#include "GbxWidgetFocusManager.generated.h"

UCLASS()
class GBXUI_API UGbxWidgetFocusManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UObject* OwnerMenu;
    
    UPROPERTY()
    UObject* FocusedWidget;
    
    UPROPERTY()
    TArray<FGbxFocusableWidgetInfo> RegisteredWidgets;
    
public:
    UGbxWidgetFocusManager();
};

