#pragma once
#include "CoreMinimal.h"
#include "WwiseExternalSourceMediaInfo.h"
#include "WwiseEventConfiguration.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct WWISEAUDIO_API FWwiseEventConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FWwiseExternalSourceMediaInfo> ExternalSourceMedia;
    
    FWwiseEventConfiguration();
};

