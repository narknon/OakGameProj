#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectOwnedGFxMenu.h"
#include "TextElementCondition.h"
#include "GFxFlavorTextMenu.generated.h"

class AConditionalFlavorTextIO;
class UGbxGFxSlider;
class UGbxTextField;
class UGbxGFxObject;

UCLASS()
class OAKGAME_API UGFxFlavorTextMenu : public UAdvancedInteractiveObjectOwnedGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AConditionalFlavorTextIO* CachedFlavorTextIO;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionTextBox;
    
    UPROPERTY(Transient)
    UGbxTextField* TitleTextBox;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ScrollBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DescriptionTextMask;
    
    UPROPERTY(Transient)
    TArray<FTextElementCondition> CachedFlavorTextData;
    
    UPROPERTY(Transient)
    FText CachedTitleText;
    
    UPROPERTY(EditAnywhere)
    FString DescriptionTextBoxClipID;
    
    UPROPERTY(EditAnywhere)
    FString TitleTextBoxClipID;
    
    UPROPERTY(EditAnywhere)
    FString ScrollBarClipID;
    
    UPROPERTY(EditAnywhere)
    FString DescriptionTextMaskClipID;
    
    UPROPERTY(EditAnywhere)
    FText BackOutText;
    
public:
    UGFxFlavorTextMenu();
    UFUNCTION()
    void InitWithData(TArray<FTextElementCondition> FlavorTextData, FText TitleText, AConditionalFlavorTextIO* FlavorTextIO) const;
    
};

