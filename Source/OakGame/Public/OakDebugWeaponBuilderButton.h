#pragma once
#include "CoreMinimal.h"
#include "GbxListItem.h"
#include "OakDebugWeaponBuilderButton.generated.h"

class UCheckBox;
class UTextBlock;
class UBorder;

UCLASS(EditInlineNew)
class OAKGAME_API UOakDebugWeaponBuilderButton : public UGbxListItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UCheckBox* CheckBoxButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UBorder* HighlightBackground;
    
public:
    UOakDebugWeaponBuilderButton();
};

