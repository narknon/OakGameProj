#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EOptionItemType.h"
#include "EOptionType.h"
#include "UObject/NoExportTypes.h"
#include "OptionDescriptionItem.generated.h"

class UOptionDescriptionItem;
class UGbxInputKeyRebindData_Button;
class UGbxInputKeyRebindData_Axis;
class UTexture2D;

UCLASS(CollapseCategories, EditInlineNew)
class UOptionDescriptionItem : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOptionType OptionType;
    
    UPROPERTY(EditAnywhere)
    EOptionItemType OptionItemType;
    
private:
    UPROPERTY(EditAnywhere)
    FText OptionItemName;
    
    UPROPERTY(EditAnywhere)
    FText OptionDescriptionTitle;
    
    UPROPERTY(EditAnywhere)
    FText OptionDescriptionText;
    
public:
    UPROPERTY(EditAnywhere)
    float SliderMin;
    
    UPROPERTY(EditAnywhere)
    float SliderMax;
    
    UPROPERTY(EditAnywhere)
    float SliderStep;
    
    UPROPERTY(EditAnywhere)
    bool SliderIsInteger;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> SpinnerOptions;
    
    UPROPERTY(EditAnywhere)
    bool SpinnerWrapEnabled;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> DropDownOptions;
    
    UPROPERTY(EditAnywhere)
    UGbxInputKeyRebindData_Button* ButtonBinding;
    
    UPROPERTY(EditAnywhere)
    UGbxInputKeyRebindData_Axis* AxisBinding;
    
    UPROPERTY(EditAnywhere)
    FVector AxisScaleVector;
    
    UPROPERTY(EditAnywhere, Instanced)
    UOptionDescriptionItem* DrivingOptionDescriptionLink;
    
    UPROPERTY(EditAnywhere)
    FText BooleanOnText;
    
    UPROPERTY(EditAnywhere)
    FText BooleanOffText;
    
    UPROPERTY(EditAnywhere)
    bool IsDesktop;
    
    UPROPERTY(EditAnywhere)
    bool IsQuail;
    
    UPROPERTY(EditAnywhere)
    bool IsXboxOne;
    
    UPROPERTY(EditAnywhere)
    bool AvailableOnNewerXboxes;
    
    UPROPERTY(EditAnywhere)
    bool IsXboxSeriesX;
    
    UPROPERTY(EditAnywhere)
    bool IsPS4;
    
    UPROPERTY(EditAnywhere)
    bool AvailableOnNewerPlayStations;
    
    UPROPERTY(EditAnywhere)
    bool IsPS5;
    
    UPROPERTY(EditAnywhere)
    bool IsOnlyAvailableInFrontendForSplitscreen;
    
    UPROPERTY(EditAnywhere)
    bool IsPrimaryPlayerOnly;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* HelperTexture;
    
    UOptionDescriptionItem();
};

