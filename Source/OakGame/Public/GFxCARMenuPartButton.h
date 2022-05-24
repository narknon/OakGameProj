#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "EGFxCARMenuPartCellType.h"
#include "OakCARMenuPartType.h"
#include "GbxMenuInputEvent.h"
#include "GFxCARMenuPartButton.generated.h"

class UTexture;
class UGbxTextField;
class UGbxGFxObject;
class UGbxGFxHintWidget;
class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxCARMenuPartButton : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    EGFxCARMenuPartCellType CellType;
    
    UPROPERTY(Transient)
    FOakCARMenuPartType PartType;
    
    UPROPERTY(Transient)
    FString IconStageName;
    
    UPROPERTY(Transient)
    bool bIsEmptyItem;
    
    UPROPERTY(Transient)
    UGbxTextField* LabelText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LabelBackground;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LoadingCircleClip;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> ImageRenderTexture;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ImageRenderClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ImageRenderShadowClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* EquipmentNameClip;
    
    UPROPERTY(Transient)
    UGbxTextField* EquipmentNameText;
    
    UPROPERTY(Transient)
    UGbxTextField* EmptyLabelText;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ButtonHelpHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* EquippedFlourishAnimClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LockIconClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* InvalidSlot;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NewIndicatorWrapperClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PrimaryColorClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SecondaryColorClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* TertiaryColorClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CategoryIconClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CategoryIconInnerClip;
    
public:
    UGFxCARMenuPartButton();
private:
    UFUNCTION()
    void OnThisFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnThisClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

