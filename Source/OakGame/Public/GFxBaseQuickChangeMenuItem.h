#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "EBaseQuickChangeMenuState.h"
#include "GFxBaseQuickChangeMenuItem.generated.h"

class UGbxCustomizationData;
class UGbxGFxObject;
class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxBaseQuickChangeMenuItem : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxCustomizationData* AssociatedCustomizationData;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ItemIcon;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NewIcon;
    
    UPROPERTY(Transient)
    UGbxTextField* ItemNameFieldHighlighted;
    
    UPROPERTY(Transient)
    UGbxTextField* ItemDescriptionField;
    
    UPROPERTY(Transient)
    UGbxTextField* ItemDescriptionFieldHighlighted;
    
    UPROPERTY(Transient)
    UGbxTextField* EridiumCounter;
    
    UPROPERTY(Transient)
    FString IconPath;
    
public:
    UPROPERTY(Transient)
    EBaseQuickChangeMenuState MenuState;
    
    UGFxBaseQuickChangeMenuItem();
};

