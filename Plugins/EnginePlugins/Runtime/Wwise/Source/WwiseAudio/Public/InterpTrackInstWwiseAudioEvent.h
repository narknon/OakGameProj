#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "InterpTrackInstWwiseAudioEvent.generated.h"

UCLASS(MinimalAPI)
class UInterpTrackInstWwiseAudioEvent : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY()
    float LastUpdatePosition;
    
    UInterpTrackInstWwiseAudioEvent();
};

