#pragma once
#include "CoreMinimal.h"
#include "GFxItemInspectionPageBase.h"
#include "EOakElementalType.h"
#include "GFxItemInspectionPageElementalStarRatings.h"
#include "GFxItemInspectionElementalPage.generated.h"

class UGbxGFxHintWidget;
class UGbxDamageType;
class UGbxGFxObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectionElementalPage : public FGFxItemInspectionPageBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText HealthHeaderLabel;
    
    UPROPERTY(EditAnywhere)
    FText ShieldHeaderLabel;
    
    UPROPERTY(EditAnywhere)
    FText ArmorHeaderLabel;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> ChangeViewLables;
    
    UPROPERTY(EditAnywhere)
    TMap<EOakElementalType, FGFxItemInspectionPageElementalStarRatings> StarRatingMapping;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxDamageType> FallbackDamageType;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RootClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ChangeViewHintClip;
    
    UPROPERTY(Transient)
    TArray<UGbxDamageType*> ElementalTypes;
    
    UPROPERTY(Transient)
    int32 CurrentElementalIndex;
    
    FGFxItemInspectionElementalPage();
};

