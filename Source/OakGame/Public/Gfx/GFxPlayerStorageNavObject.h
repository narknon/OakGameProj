#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxPlayerStorageNavObject.generated.h"

class UGFxPlayerStorageNavButton;
class UGFxPlayerStorageMenu;
class UGbxGFxHintWidget;
class UGbxTextField;

UCLASS(NonTransient)
class UGFxPlayerStorageNavObject : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxPlayerStorageMenu> OwnerStorageMenu;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PreviousButtonTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextButtonTextClip;
    
    UPROPERTY(Transient)
    UGFxPlayerStorageNavButton* BankButton;
    
    UPROPERTY(Transient)
    UGFxPlayerStorageNavButton* InventoryButton;
    
    UPROPERTY(Transient)
    UGbxTextField* MenuLabelClip;
    
public:
    UGFxPlayerStorageNavObject();
};

