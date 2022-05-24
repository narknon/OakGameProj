#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "SubtitleBarItems.h"
#include "GFxMainOptionPanel.generated.h"

class UGbxGFxListItemSpinner;
class UGFxOptionsMenu;
class UGbxGFxGridScrollingList;
class UGFxOptionsControlsPanel;
class UGFxOptionPreviewPanel;
class UGbxTextField;
class UGbxGFxSlider;

UCLASS(NonTransient)
class OAKGAME_API UGFxMainOptionPanel : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxObject* Title;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentPanel;
    
    UPROPERTY(Transient)
    UGFxOptionPreviewPanel* DescriptionPanel;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ScrollBar;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* ControlSchemeSpinner;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* ControlSchemeDrivingSpinner;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* ControlSchemeJoystickSpinner;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* ControlSchemeJoystickDrivingSpinner;
    
    UPROPERTY(Transient)
    FSubtitleBarItems SubtitleBarItems;
    
    UPROPERTY(Transient)
    UGbxTextField* SubSectionTitle;
    
    UPROPERTY(Transient)
    UGFxOptionsControlsPanel* ControlsRightPanel;
    
    UPROPERTY(Transient)
    UGFxOptionsMenu* OwningMenu;
    
    UGFxMainOptionPanel();
};

