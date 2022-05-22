#pragma once
#include "CoreMinimal.h"
#include "WwiseObject.h"
#include "UObject/NoExportTypes.h"
#include "WwiseRtpc.generated.h"

UCLASS()
class WWISEAUDIO_API UWwiseRtpc : public UWwiseObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FFloatInterval ValueRange;
    
    UPROPERTY(VisibleAnywhere)
    float DefaultValue;
    
    UWwiseRtpc();
};

