#pragma once
#include "CoreMinimal.h"
#include "GFxGearUpExtractionMenuWidget.h"
#include "GFxGearUpExtractionMenuInfoPanel.generated.h"

class UGbxGFxObject;
class UGbxGFxSlider;
class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGFxGearUpExtractionMenuInfoPanel : public UGFxGearUpExtractionMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* GearDescriptionMaskClip;
    
    UPROPERTY(Transient)
    UGbxTextField* GearDescriptionTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* GearDescriptionScrollBarClip;
    
public:
    UGFxGearUpExtractionMenuInfoPanel();
};

