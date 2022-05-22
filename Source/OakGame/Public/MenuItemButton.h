#pragma once
#include "CoreMinimal.h"
#include "MenuItemButton.generated.h"

class UGbxGFxButton;
class UGbxTextField;
class UGbxGFxObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FMenuItemButton {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxButton* MenuItem;
    
    UPROPERTY(Transient)
    UGbxTextField* LabelDropShadow;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SocialWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ListIconContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ListIcon;
    
    UPROPERTY(Transient)
    UGbxTextField* ListIconText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NeedHelpIcon;
    
    FMenuItemButton();
};

