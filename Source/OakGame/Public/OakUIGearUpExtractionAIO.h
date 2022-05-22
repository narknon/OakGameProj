#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObject.h"
#include "OakUIGearUpExtractionAIO.generated.h"

UCLASS()
class AOakUIGearUpExtractionAIO : public AAdvancedInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGearUpOfferingsUpdated OnGearUpOfferingsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumOfferingsLeft;
    
    UPROPERTY()
    FGearExtractionEvent OnExtractionInitiated;
    
    UPROPERTY()
    FGearExtractorUnavailable OnExtractorUnavailable;
    
    AOakUIGearUpExtractionAIO();
};

