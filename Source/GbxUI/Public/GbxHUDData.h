#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxHUDWidgetInfo.h"
#include "GbxDataAsset.h"
#include "GbxHUDLayoutData.h"
#include "GbxHUDData.generated.h"

class UGbxGFxHUDContainer;
class UGbxGFxHUDFeedbackData;
class UGbxHUDStateData;

UCLASS()
class GBXUI_API UGbxHUDData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxGFxHUDContainer> ContainerClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FGbxGFxHUDWidgetInfo> Widgets;
    
    UPROPERTY(EditAnywhere)
    FGbxHUDLayoutData StandardLayout;
    
    UPROPERTY(EditAnywhere)
    FGbxHUDLayoutData TwoPlayerHorizontalLayout;
    
    UPROPERTY(EditAnywhere)
    FGbxHUDLayoutData TwoPlayerVerticalLayout;
    
    UPROPERTY(EditAnywhere)
    FGbxHUDLayoutData FourPlayerLayout;
    
    UPROPERTY(EditAnywhere)
    FGbxHUDLayoutData StandardLayoutGearUpMode;
    
    UPROPERTY(EditAnywhere)
    FGbxHUDLayoutData TwoPlayerHorizontalLayoutGearUpMode;
    
    UPROPERTY(EditAnywhere)
    FGbxHUDLayoutData TwoPlayerVerticalLayoutGearUpMode;
    
    UPROPERTY(EditAnywhere)
    FGbxHUDLayoutData FourPlayerLayoutGearUpMode;
    
    UPROPERTY(EditAnywhere)
    UGbxGFxHUDFeedbackData* FeedbackData;
    
    UPROPERTY(EditAnywhere)
    UGbxHUDStateData* StartState;
    
    UGbxHUDData();
};

