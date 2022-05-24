#pragma once
#include "CoreMinimal.h"
#include "OakCARMenuPartType.h"
#include "GbxFocusableWidgetAdjacencyNames.h"
#include "GFxCARMenuPartInfo.generated.h"

class UGFxCARMenuPartButton;
class UGFxCARMenuCustomizePage;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxCARMenuPartInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText PartName;
    
    UPROPERTY(EditAnywhere)
    FOakCARMenuPartType PartType;
    
    UPROPERTY(EditAnywhere)
    FString StageName;
    
    UPROPERTY(EditAnywhere)
    FString ListName;
    
    UPROPERTY(EditAnywhere)
    FString CustomizePanelFrameName;
    
    UPROPERTY(EditAnywhere)
    FGbxFocusableWidgetAdjacencyNames AdjacentWidgets;
    
    UPROPERTY(EditAnywhere)
    FGbxFocusableWidgetAdjacencyNames AdjacentWidgetsSplitscreen;
    
    UPROPERTY(EditAnywhere)
    bool bCanSelectEmpty;
    
    UPROPERTY(Transient)
    UGFxCARMenuPartButton* BUTTON;
    
    UPROPERTY(Transient)
    UGFxCARMenuCustomizePage* Page;
    
    FGFxCARMenuPartInfo();
};

