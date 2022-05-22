#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientLocationChooser.h"
#include "AudioPrepLocationConsumer.h"
#include "UObject/NoExportTypes.h"
#include "ActiveAmbientLocationChooser_PreselectedLocation.generated.h"

UCLASS(BlueprintType, CollapseCategories, EditInlineNew)
class UActiveAmbientLocationChooser_PreselectedLocation : public UActiveAmbientLocationChooser, public IAudioPrepLocationConsumer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FVector> Locations;
    
    UPROPERTY()
    TArray<float> Radii;
    
    UActiveAmbientLocationChooser_PreselectedLocation();
    UFUNCTION()
    void UpdateLocations();
    
    UFUNCTION()
    void DrawLocations();
    
    UFUNCTION(BlueprintCallable)
    bool AddLocation(const FVector& InLocation, float InRadius);
    
    
    // Fix for true pure virtual functions not being implemented
};

