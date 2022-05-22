#pragma once
#include "CoreMinimal.h"
#include "PlayerPainSoundData.generated.h"

class UCharacterSoundTag;

USTRUCT(BlueprintType)
struct FPlayerPainSoundData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float HealthPercentThreshold;
    
    UPROPERTY(EditAnywhere)
    UCharacterSoundTag* SoundTag;
    
    OAKGAME_API FPlayerPainSoundData();
};

