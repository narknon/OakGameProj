#pragma once
#include "CoreMinimal.h"
#include "GFxSkillScreenInfoCardContainer.generated.h"

class UGbxGFxObject;
class UGbxGFxButton;
class UGbxGFxSlider;
class UGbxTextField;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxSkillScreenInfoCardContainer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxObject* Root;
    
    UPROPERTY(Transient)
    UGbxGFxButton* InfoCardButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* IconArt;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionText;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ScrollBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ScrollMask;
    
    UPROPERTY(EditAnywhere)
    FText AvailablePointsString;
    
    FGFxSkillScreenInfoCardContainer();
};

