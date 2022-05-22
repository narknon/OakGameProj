#pragma once
#include "CoreMinimal.h"
#include "GbxGFxPooledGridListFullConfig.h"
#include "GFxItemInspectionPageBase.h"
#include "GFxItemInspectionSkinsPage.generated.h"

class UGFxItemInspectionSkinsList;
class UGbxGFxSlider;
class UGbxGFxButton;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectionSkinsPage : public FGFxItemInspectionPageBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxGFxPooledGridListFullConfig SkinsListConfig;
    
    UPROPERTY(EditAnywhere)
    int32 SplitScreenSkinListRowCount;
    
    UPROPERTY(EditAnywhere)
    FText DefaultSkinName;
    
    UPROPERTY(EditAnywhere)
    FText WeaponSkinTextName;
    
    UPROPERTY(Transient)
    UGFxItemInspectionSkinsList* SkinsList;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ScrollBarSkinsClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavArrowLeftButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavArrowRightButton;
    
    FGFxItemInspectionSkinsPage();
};

