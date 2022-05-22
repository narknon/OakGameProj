#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "UObject/NoExportTypes.h"
#include "GFxColorPickerItem.generated.h"

class UGbxGFxHintWidget;
class UGbxGFxObject;
class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxColorPickerItem : public UGbxGFxListCell {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FColor AssociatedColor;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DefaultColorClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* TopHintWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* TopHint;
    
    UPROPERTY(Transient)
    UGbxTextField* TopTextField;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BottomHintWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* BottomHint;
    
    UPROPERTY(Transient)
    UGbxTextField* BottomTextField;
    
    UGFxColorPickerItem();
};

