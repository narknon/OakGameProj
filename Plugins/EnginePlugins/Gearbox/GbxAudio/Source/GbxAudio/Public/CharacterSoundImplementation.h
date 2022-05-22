#pragma once
#include "CoreMinimal.h"
#include "CharacterSoundImplementation.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FCharacterSoundImplementation {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bOriginator;
    
    UPROPERTY()
    UWwiseEvent* DefaultWwiseEvent;
    
    UPROPERTY()
    bool bOverrideWwiseEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WwiseEvent;
    
    GBXAUDIO_API FCharacterSoundImplementation();
};

