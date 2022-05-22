#pragma once
#include "CoreMinimal.h"
#include "GbxGFxPooledGridListFullConfig.h"
#include "GFxItemInspectionPageBase.h"
#include "GFxItemInspectionPartsPage.generated.h"

class UGbxGFxObject;
class UGFxItemInspectionPartList;
class UGFxItemInspectionStatRowObject;
class UGbxGFxSlider;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectionPartsPage : public FGFxItemInspectionPageBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxGFxPooledGridListFullConfig PartsListConfig;
    
    UPROPERTY(EditAnywhere)
    int32 SplitScreenPartsListSize;
    
    UPROPERTY(EditAnywhere)
    int32 NumStatRows;
    
    UPROPERTY(EditAnywhere)
    FText WeaponPartEffectsText;
    
    UPROPERTY(EditAnywhere)
    FText WeaponPartsText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WeaponPartsContainerClip;
    
    UPROPERTY(Transient)
    UGFxItemInspectionPartList* PartsListClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ScrollBarClip;
    
    UPROPERTY(Transient)
    TArray<UGFxItemInspectionStatRowObject*> StatRowClips;
    
    FGFxItemInspectionPartsPage();
};

