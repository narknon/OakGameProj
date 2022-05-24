#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxMenuInputEvent.h"
#include "GFxVaultHunterProfileCardPlayerStatusWidget.generated.h"

class UGFxVaultHunterProfileCardChangeStatusList;
class UGbxTextField;
class UGbxGFxHintWidget;
class UGFxVaultHunterProfileCard;
class UGbxGFxListCell;

UCLASS(NonTransient)
class UGFxVaultHunterProfileCardPlayerStatusWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* StatusWrapperClip;
    
    UPROPERTY(Transient)
    UGbxTextField* LookingForHelpTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* StatusTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StatusIconClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ChangeStatusWrapperClip;
    
    UPROPERTY(Transient)
    UGFxVaultHunterProfileCardChangeStatusList* ChangeHunterStatusClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ToggleHelpHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* UpdateStatusHintClip;
    
    UPROPERTY(Transient)
    bool bCurrentLookingForHelp;
    
    UPROPERTY(Transient)
    bool bCurrentHasStatus;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxVaultHunterProfileCard> OwningProfileCard;
    
public:
    UGFxVaultHunterProfileCardPlayerStatusWidget();
private:
    UFUNCTION()
    void OnActivityCellClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo);
    
};

