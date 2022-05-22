#pragma once
#include "CoreMinimal.h"
#include "GFxOptionBase.h"
#include "RebindContextAndDescription.h"
#include "GFxKeybindingsOptions.generated.h"

class UGbxGFxHintWidget;
class UGbxGFxDialogBox;
class UGFxMainOptionPanel;
class UGbxInputRebindContext;

UCLASS(EditInlineNew)
class UGFxKeybindingsOptions : public UGFxOptionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FRebindContextAndDescription DefaultWalkingKeybindingsAndDescriptions;
    
    UPROPERTY(Transient)
    FRebindContextAndDescription DefaultDrivingKeybindingsAndDescriptions;
    
    UPROPERTY(Transient)
    FRebindContextAndDescription DefaultCommonKeybindingsAndDescriptions;
    
    UPROPERTY(Transient)
    UGbxInputRebindContext* WalkingRebindContext;
    
    UPROPERTY(Transient)
    UGbxInputRebindContext* DrivingRebindContext;
    
    UPROPERTY(Transient)
    UGbxInputRebindContext* CommonRebindContext;
    
    UPROPERTY(Transient)
    UGbxGFxDialogBox* CurrentDialog;
    
    UPROPERTY(Transient)
    UGFxMainOptionPanel* MainOptionPanel;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PreviousSubmenuHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextSubmenuHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PreviousControlSchemeHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextControlSchemeHint;
    
public:
    UGFxKeybindingsOptions();
};

