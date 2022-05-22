#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "InterpTrackWwiseAudioRTPC.generated.h"

class UWwiseRtpc;

UCLASS(CollapseCategories, MinimalAPI)
class UInterpTrackWwiseAudioRTPC : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseRtpc* RTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPlayOnReverse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bContinueRTPCOnMatineeEnd: 1;
    
    UInterpTrackWwiseAudioRTPC();
};

