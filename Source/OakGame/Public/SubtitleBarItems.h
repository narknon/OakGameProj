#pragma once
#include "CoreMinimal.h"
#include "SubtitleBarItems.generated.h"

class UGbxGFxGridScrollingList;
class UGbxGFxListCell;
class UGbxGFxHintWidget;

USTRUCT(BlueprintType)
struct FSubtitleBarItems {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ControlsSubtitlesSL;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* LeftNavButton;
    
    UPROPERTY(Transient)
    UGbxGFxListCell* BasicTab;
    
    UPROPERTY(Transient)
    UGbxGFxListCell* AdvancedTab;
    
    UPROPERTY(Transient)
    UGbxGFxListCell* BenchmarkTab;
    
    UPROPERTY(Transient)
    UGbxGFxListCell* KeyboardMappings;
    
    UPROPERTY(Transient)
    UGbxGFxListCell* GamepadMappings;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* RightNavButton;
    
    OAKGAME_API FSubtitleBarItems();
};

