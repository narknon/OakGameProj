#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AudioPrepLocationFinder.h"
#include "AudioPrepLocationFinder_Blueprint.generated.h"

class UAudioPrepLocationConsumer;
class IAudioPrepLocationConsumer;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UAudioPrepLocationFinder_Blueprint : public UAudioPrepLocationFinder {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TScriptInterface<IAudioPrepLocationConsumer> CurrentConsumer;
    
    UAudioPrepLocationFinder_Blueprint();
    UFUNCTION(BlueprintCallable)
    void AddLocation(FVector Location, FRotator Rotation, float Radius);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddFoundLocations();
    
};

