#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "FastTravelStationDebugButton.generated.h"

class UBUTTON;
class UTextBlock;

UCLASS(EditInlineNew)
class GBXTRAVELSTATION_API UFastTravelStationDebugButton : public UGbxUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UBUTTON* StationButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* DescriptionText;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ButtonSelectedColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ButtonUnSelectedColor;
    
public:
    UFastTravelStationDebugButton();
private:
    UFUNCTION()
    void OnStationClicked();
    
};

