#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "RebindContextAndDescription.h"
#include "GamepadStickTypeToSchemes.h"
#include "OptionDescriptionData.generated.h"

class UOptionDescriptionItem;

UCLASS()
class OAKGAME_API UOptionDescriptionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<UOptionDescriptionItem*> AudioOptionDescription;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UOptionDescriptionItem*> NetworkOptionDescription;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UOptionDescriptionItem*> ControlsOptionDescription;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UOptionDescriptionItem*> AdvancedControlsOptionDescription;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UOptionDescriptionItem*> GameplayOptionDescription;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UOptionDescriptionItem*> GraphicsOptionDescription;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UOptionDescriptionItem*> GraphicsAdvancedOptionDescription;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UOptionDescriptionItem*> GraphicsBenchmarkOptionsDescription;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UOptionDescriptionItem*> AccessibilityOptionsDescription;
    
    UPROPERTY(EditAnywhere)
    TArray<FRebindContextAndDescription> KeyboardCommonControlSchemes;
    
    UPROPERTY(EditAnywhere)
    TArray<FRebindContextAndDescription> KeyboardWalkingControlSchemes;
    
    UPROPERTY(EditAnywhere)
    TArray<FRebindContextAndDescription> KeyboardVehicleControlSchemes;
    
    UPROPERTY(EditAnywhere)
    FRebindContextAndDescription GamepadCommonControlScheme;
    
    UPROPERTY(EditAnywhere)
    TArray<FGamepadStickTypeToSchemes> GamepadWalkingStickTypeToSchemesMap;
    
    UPROPERTY(EditAnywhere)
    TArray<FGamepadStickTypeToSchemes> GamepadDrivingStickTypeToSchemesMap;
    
    UPROPERTY(EditAnywhere, Instanced)
    UOptionDescriptionItem* WalkingThumbstickSchemeDescription;
    
    UPROPERTY(EditAnywhere, Instanced)
    UOptionDescriptionItem* WalkingButtonSchemeDescription;
    
    UPROPERTY(EditAnywhere, Instanced)
    UOptionDescriptionItem* DrivingThumbstickSchemeDescription;
    
    UPROPERTY(EditAnywhere, Instanced)
    UOptionDescriptionItem* DrivingButtonSchemeDescription;
    
    UOptionDescriptionData();
};

