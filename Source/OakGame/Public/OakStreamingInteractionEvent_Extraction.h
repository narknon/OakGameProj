#pragma once
#include "CoreMinimal.h"
#include "OakStreamingInteractionEvent_Lootable.h"
#include "OakStreamingInteractionEvent_Extraction.generated.h"

class AOakUIGearUpExtractionAIO;
class AActor;

UCLASS()
class UOakStreamingInteractionEvent_Extraction : public UOakStreamingInteractionEvent_Lootable {
    GENERATED_BODY()
public:
    UOakStreamingInteractionEvent_Extraction();
    UFUNCTION()
    void OnExtractorUnavailable(AOakUIGearUpExtractionAIO* Extractor);
    
    UFUNCTION()
    void OnExtractionInitiated(AOakUIGearUpExtractionAIO* Extractor, TArray<TWeakObjectPtr<AActor>>& ItemsToExtract);
    
};

