#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterSoundInterface.h"
#include "CurrentVocalization.h"
#include "CurrentVocalLoopInfo.h"
#include "CharacterSoundLogicComponent.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAUDIO_API UCharacterSoundLogicComponent : public UActorComponent, public ICharacterSoundInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FCurrentVocalization CurrentVocalization;
    
    UPROPERTY(Transient)
    FCurrentVocalLoopInfo CurrentVocalLoop;
    
public:
    UCharacterSoundLogicComponent();
    
    // Fix for true pure virtual functions not being implemented
};

