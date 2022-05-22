#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientLocationChooser.h"
#include "UObject/NoExportTypes.h"
#include "ActiveAmbientLocationChooser_Blueprint.generated.h"

class UActiveAmbientSoundComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UActiveAmbientLocationChooser_Blueprint : public UActiveAmbientLocationChooser {
    GENERATED_BODY()
public:
    UActiveAmbientLocationChooser_Blueprint();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool NominateSoundLocation(UActiveAmbientSoundComponent* ActiveAmbientComponent, FVector& Out_Location, float Out_Radius);
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitLocationChooser(UActiveAmbientSoundComponent* ActiveAmbientComponent);
    
};

