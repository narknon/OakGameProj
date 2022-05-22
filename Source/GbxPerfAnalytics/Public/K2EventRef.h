#pragma once
#include "CoreMinimal.h"
#include "K2EventRef.generated.h"

USTRUCT(BlueprintType)
struct FK2EventRef {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString EventName;
    
    GBXPERFANALYTICS_API FK2EventRef();
};

