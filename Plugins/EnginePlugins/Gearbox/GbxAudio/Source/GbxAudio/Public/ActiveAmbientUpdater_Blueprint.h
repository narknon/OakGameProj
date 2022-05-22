#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientUpdater.h"
#include "ActiveAmbientInstance.h"
#include "ActiveAmbientUpdater_Blueprint.generated.h"

class UActiveAmbientSoundComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UActiveAmbientUpdater_Blueprint : public UActiveAmbientUpdater {
    GENERATED_BODY()
public:
    UActiveAmbientUpdater_Blueprint();
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void UpdateActiveAmbientInstance(UActiveAmbientSoundComponent* ActiveAmbientComponent, FActiveAmbientInstance& ActiveAmbientInstance, float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    void InitializeActiveAmbientInstance(UActiveAmbientSoundComponent* ActiveAmbientComponent, FActiveAmbientInstance& ActiveAmbientInstance);
    
};

