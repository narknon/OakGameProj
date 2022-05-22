#pragma once
#include "CoreMinimal.h"
#include "CharacterSoundImplementation.h"
#include "InheritableSoundMap.generated.h"

class UCharacterSoundTag;

USTRUCT(BlueprintType)
struct FInheritableSoundMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TMap<UCharacterSoundTag*, FCharacterSoundImplementation> CharacterSounds;
    
    GBXAUDIO_API FInheritableSoundMap();
};

