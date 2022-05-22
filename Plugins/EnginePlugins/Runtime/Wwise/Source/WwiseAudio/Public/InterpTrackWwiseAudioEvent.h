#pragma once
#include "CoreMinimal.h"
#include "WwiseAudioEventTrackKey.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "InterpTrackWwiseAudioEvent.generated.h"

UCLASS(CollapseCategories)
class WWISEAUDIO_API UInterpTrackWwiseAudioEvent : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FWwiseAudioEventTrackKey> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bContinueEventOnMatineeEnd: 1;
    
    UInterpTrackWwiseAudioEvent();
};

