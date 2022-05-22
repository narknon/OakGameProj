#pragma once
#include "CoreMinimal.h"
#include "EWeaponAudioBodyLoopType.h"
#include "WeaponAudioBodyLoop.generated.h"

class UWwiseEvent;

USTRUCT(BlueprintType)
struct FWeaponAudioBodyLoop {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PlaybackSocket;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartLoopEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StopLoopEvent;
    
    UPROPERTY(EditAnywhere)
    EWeaponAudioBodyLoopType LoopType;
    
    UPROPERTY(EditAnywhere)
    float ComponentSize;
    
    UPROPERTY(EditAnywhere)
    FName ComponentTag;
    
    OAKGAME_API FWeaponAudioBodyLoop();
};

