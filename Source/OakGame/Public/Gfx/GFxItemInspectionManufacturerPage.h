#pragma once
#include "CoreMinimal.h"
#include "GFxItemInspectManufacturerChallengeInfo.h"
#include "GFxItemInspectionPageBase.h"
#include "GFxItemInspectionManufacturerPage.generated.h"

class UGbxGFxHintWidget;
class UGbxGFxObject;
class UGbxGFxSlider;
class UGbxTextField;
class UGFxItemInspectionManufacturerChallengeObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectionManufacturerPage : public FGFxItemInspectionPageBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText WatchCommericalHintText;
    
    UPROPERTY(EditAnywhere)
    FText ChallengesHeaderText;
    
    UPROPERTY(EditAnywhere)
    FText ViewChallengeText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RootClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PlayCommercialHintClip;
    
    UPROPERTY(Transient)
    UGbxTextField* ManufacturerDescriptionTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ManufacturerDescriptionScrollbarClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ManufacturerDescriptionMaskClip;
    
    UPROPERTY(Transient)
    TArray<UGFxItemInspectionManufacturerChallengeObject*> ChallengeClips;
    
    UPROPERTY(Transient)
    TArray<FGFxItemInspectManufacturerChallengeInfo> ChallengeInfos;
    
    FGFxItemInspectionManufacturerPage();
};

