#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDebugMenuSubmenu.h"
#include "AvailableTravelStation.h"
#include "FastTravelStationDebugMenu.generated.h"

class UScrollBox;
class UCheckBox;
class UBUTTON;
class UFastTravelStationDebugButton;
class UTextBlock;

UCLASS(EditInlineNew, Config=Game)
class GBXTRAVELSTATION_API UFastTravelStationDebugMenu : public UGbxDebugMenuSubmenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UBUTTON* TravelButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UCheckBox* ActiveStationsButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UCheckBox* ShowLevelStationsButton;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UScrollBox* TravelStationList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* ErrorText;
    
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFastTravelStationDebugButton> OptionButtonClass;
    
    UPROPERTY()
    TArray<FAvailableTravelStation> AllFastTravelStations;
    
    UPROPERTY()
    TArray<FAvailableTravelStation> AvailableFastTravelStations;
    
    UPROPERTY()
    TArray<FAvailableTravelStation> AllLevelTravelStations;
    
    UPROPERTY()
    bool ShowAllFastTravelStations;
    
public:
    UFastTravelStationDebugMenu();
private:
    UFUNCTION()
    void OnTravelStationSelectedChanged(UFastTravelStationDebugButton* TriggeredButton, bool bIsChecked);
    
    UFUNCTION()
    void OnTravelButtonClicked();
    
    UFUNCTION()
    void OnShowLevelStationsStateChanged(bool bIsChecked);
    
    UFUNCTION()
    void OnActiveStationsStateChanged(bool bIsChecked);
    
};

