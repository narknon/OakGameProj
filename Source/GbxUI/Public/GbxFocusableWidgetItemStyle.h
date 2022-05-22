#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "EGbxFocusableWidgetState.h"
#include "Styling/SlateColor.h"
#include "GbxFocusableWidgetItemStyle.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxFocusableWidgetItemStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGbxFocusableWidgetState State;
    
    UPROPERTY(EditAnywhere)
    bool bUseTextColor;
    
    UPROPERTY(EditAnywhere)
    bool bUseTextSize;
    
    UPROPERTY(EditAnywhere)
    bool bUseIndicatorBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateColor TextColor;
    
    UPROPERTY(EditAnywhere)
    int32 TextSize;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush IndicatorBrush;
    
    FGbxFocusableWidgetItemStyle();
};

