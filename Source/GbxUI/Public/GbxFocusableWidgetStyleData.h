#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxFocusableWidgetItemStyle.h"
#include "GbxFocusableWidgetStyleData.generated.h"

UCLASS()
class GBXUI_API UGbxFocusableWidgetStyleData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGbxFocusableWidgetItemStyle> Styles;
    
    UPROPERTY(EditDefaultsOnly)
    FGbxFocusableWidgetItemStyle DefaultFocusedStyle;
    
    UPROPERTY(EditDefaultsOnly)
    FGbxFocusableWidgetItemStyle DefaultNotFocusedStyle;
    
    UGbxFocusableWidgetStyleData();
};

