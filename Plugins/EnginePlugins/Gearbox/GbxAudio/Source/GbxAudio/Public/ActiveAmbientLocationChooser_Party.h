#pragma once
#include "CoreMinimal.h"
#include "ActiveAmbientLocationChooser_PreselectedLocation.h"
#include "UObject/NoExportTypes.h"
#include "ActiveAmbientLocationChooser_Party.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UActiveAmbientLocationChooser_Party : public UActiveAmbientLocationChooser_PreselectedLocation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PartierWeight;
    
    UPROPERTY(EditAnywhere)
    float PartierRadius;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval IntensityRange;
    
    UPROPERTY(EditAnywhere)
    float PartyDecayPerNomination;
    
    UPROPERTY(EditAnywhere)
    bool bVisualizeParty;
    
    UPROPERTY(EditAnywhere)
    float PartyVisualizationLineLength;
    
    UPROPERTY()
    TArray<float> PartyWeights;
    
    UPROPERTY()
    float TotalPartyWeight;
    
    UActiveAmbientLocationChooser_Party();
};

