#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_CharacterSound.generated.h"

class UCharacterSoundTag;

UCLASS(CollapseCategories)
class GBXAUDIO_API UAnimNotify_CharacterSound : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCharacterSoundTag* Tag;
    
    UAnimNotify_CharacterSound();
};

