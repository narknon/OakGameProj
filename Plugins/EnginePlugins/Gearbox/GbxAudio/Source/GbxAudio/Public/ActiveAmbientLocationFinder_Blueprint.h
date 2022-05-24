#pragma once
#include "CoreMinimal.h"
#include "AudioPrepLocationFinder.h"
#include "ActiveAmbientLocationFinder_Blueprint.generated.h"

class UActiveAmbientLocationChooser_PreselectedLocation;
class UActiveAmbientSoundComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, Deprecated, EditInlineNew, NotPlaceable)
class UDEPRECATED_ActiveAmbientLocationFinder_Blueprint : public UAudioPrepLocationFinder {
    GENERATED_BODY()
public:
    UDEPRECATED_ActiveAmbientLocationFinder_Blueprint();
    UFUNCTION(BlueprintImplementableEvent)
    void AddFoundLocations(UActiveAmbientSoundComponent* ActiveAmbientComponent, UActiveAmbientLocationChooser_PreselectedLocation* PreselectedLocationChooser);
    
};

