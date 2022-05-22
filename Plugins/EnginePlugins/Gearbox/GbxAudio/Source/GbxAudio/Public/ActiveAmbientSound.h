#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActiveAmbientSound.generated.h"

class UActiveAmbientSoundComponent;

UCLASS(MinimalAPI)
class AActiveAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 TargetInstances;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UActiveAmbientSoundComponent* ActiveAmbientSound;
    
    AActiveAmbientSound();
    UFUNCTION(BlueprintCallable)
    void EnableSounds();
    
    UFUNCTION(BlueprintCallable)
    void DisableSounds();
    
};

