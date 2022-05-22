#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuSwitcherNavWidgetCustomItem.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxMenuSwitcherNavWidgetCustomItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FName ItemId;
    
    UPROPERTY(Transient)
    FString IconFrameName;
    
    UPROPERTY(Transient)
    FText TitleText;
    
    UPROPERTY(Transient)
    bool bDisabled;
    
    FGbxGFxMenuSwitcherNavWidgetCustomItem();
};

