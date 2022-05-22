#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "InterpTrackInstWwiseAudioRTPC.generated.h"

UCLASS()
class UInterpTrackInstWwiseAudioRTPC : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UInterpTrackInstWwiseAudioRTPC();
};

