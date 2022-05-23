#pragma once
#include "CoreMinimal.h"
#include "GFxItemCardAbbreviatedObject.h"
#include "GFxItemCardObject.generated.h"

class UGFxCurrencyCounterClip;
class UGbxTextField;
class UGbxGFxObject;

USTRUCT(BlueprintType)
struct FGFxItemCardObject : public FGFxItemCardAbbreviatedObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString DescriptionHighlightColor;
    
    UPROPERTY(Transient)
    float TotalSpinnerHeightOverride;
    
    UPROPERTY(Transient)
    float CostSpinTime;
    
    UPROPERTY(Transient)
    float PauseOnNewValueTime;
    
    UPROPERTY(Transient)
    float SecondaryStatsBottomSpacer;
    
    UPROPERTY(Transient)
    float ClassModSpacingHeight;
    
    UPROPERTY(Transient)
    float LegendaryArtifactSpacingHeight;
    
    UPROPERTY(Transient)
    float TotalVerticalAdjustment;
    
    UPROPERTY(Transient)
    UGFxCurrencyCounterClip* CurrencyWidget;
    
protected:
    UPROPERTY(Transient)
    UGbxTextField* ItemName;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MainStatBackground;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MainStatBackgroundRaritySides;
    
    UPROPERTY(Transient)
    UGbxTextField* TextStats;
    
    UPROPERTY(Transient)
    UGbxTextField* SDUTextStats;
    
    UPROPERTY(Transient)
    UGbxTextField* PickupTextStats;
    
    UPROPERTY(Transient)
    int32 MaxNumTextStats;
    
    UPROPERTY(Transient)
    UGbxTextField* TextStatsTextfieldToUse;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ManufacturerWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ManufacturerFill;
    
    UPROPERTY(Transient)
    UGbxTextField* ManufacturerStats;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ManufacturerTextTint;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ItemCardBottom;
    
public:
    OAKGAME_API FGFxItemCardObject();
};

