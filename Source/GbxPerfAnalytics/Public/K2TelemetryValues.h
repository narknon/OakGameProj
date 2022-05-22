#pragma once
#include "CoreMinimal.h"
#include "K2EventRef.h"
#include "K2TelemetryValues.generated.h"

USTRUCT(BlueprintType)
struct FK2TelemetryValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FK2EventRef Event;
    
    GBXPERFANALYTICS_API FK2TelemetryValues();
};

