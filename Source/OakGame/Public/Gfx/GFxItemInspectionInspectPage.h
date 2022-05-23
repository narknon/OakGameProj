#pragma once
#include "CoreMinimal.h"
#include "GFxItemInspectionPageBase.h"
#include "GFxItemInspectionInspectPage.generated.h"

class UGbxGFxHintWidget;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectionInspectPage : public FGFxItemInspectionPageBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText SkinTitleText;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* SkinsHintClip;
    
    FGFxItemInspectionInspectPage();
};

