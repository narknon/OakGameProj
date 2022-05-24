#pragma once
#include "CoreMinimal.h"
#include "EGbxGFxScrollListAddedItemPriority.h"
#include "EGbxGFxListConfigType.h"
#include "EGbxGFxScrollListFocusOrderPriority.h"
#include "EGbxGFxScrollListFocusChangedAction.h"
#include "EGbxGFxListOrientation.h"
#include "EGbxFocusableWidgetMouseBehavior.h"
#include "UObject/NoExportTypes.h"
#include "EGbxGFxListAlignment.h"
#include "EGbxGFxScrollListWrapMode.h"
#include "GbxGFxListConfig.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxListConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGbxGFxListConfigType ConfigType;
    
    UPROPERTY(EditAnywhere)
    EGbxGFxListOrientation ListOrientation;
    
    UPROPERTY(EditAnywhere)
    EGbxGFxListAlignment ListAlignment;
    
    UPROPERTY(EditAnywhere)
    int32 FillSize;
    
    UPROPERTY(EditAnywhere)
    float VertCellSpacing;
    
    UPROPERTY(EditAnywhere)
    float HorzCellSpacing;
    
    UPROPERTY(EditAnywhere)
    bool bAutoHideScrollBar;
    
    UPROPERTY(EditAnywhere)
    FString ScrollBarName;
    
    UPROPERTY(EditAnywhere)
    EGbxGFxScrollListWrapMode WrapMode;
    
    UPROPERTY(EditAnywhere)
    EGbxFocusableWidgetMouseBehavior DefaultItemSelectionBehavior;
    
    UPROPERTY(EditAnywhere)
    EGbxGFxScrollListFocusChangedAction FocusChangeAction;
    
    UPROPERTY(EditAnywhere)
    bool bMustHaveOneFocusableCellToReceiveFocus;
    
    UPROPERTY(EditAnywhere)
    FString EntryPrefix;
    
    UPROPERTY(EditAnywhere)
    FString GridAreaName;
    
    UPROPERTY(EditAnywhere)
    FString GridMaskName;
    
    UPROPERTY(EditAnywhere)
    EGbxGFxScrollListFocusOrderPriority FocusOrderPriority;
    
    UPROPERTY(EditAnywhere)
    EGbxGFxScrollListAddedItemPriority AddedItemPriority;
    
    UPROPERTY(EditAnywhere)
    bool bUseFixedCellBounds;
    
    UPROPERTY(EditAnywhere)
    FVector2D FixedCellBoundsDemensions;
    
    UPROPERTY(EditAnywhere)
    bool bMoveSelectionScrollIntoView;
    
    UPROPERTY(EditAnywhere)
    bool bMoveSelectionAnimateScroll;
    
    UPROPERTY(EditAnywhere)
    bool bKeepScrollbarOnTop;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysConsumeDirectionInput;
    
    UPROPERTY(EditAnywhere)
    bool bAllowScrolling;
    
    UPROPERTY(EditAnywhere)
    bool bReverseScrollDirection;
    
    UPROPERTY(EditAnywhere)
    FName DefaultItemSelectedAudioEventName;
    
    UPROPERTY(EditAnywhere)
    FName DefaultItemClickedAudioEventName;
    
    UPROPERTY(EditAnywhere)
    bool bCanBeNavigatedIfMouseDisabled;
    
    UPROPERTY(EditAnywhere)
    bool bFocusListIfCellGetsFocused;
    
    FGbxGFxListConfig();
};

