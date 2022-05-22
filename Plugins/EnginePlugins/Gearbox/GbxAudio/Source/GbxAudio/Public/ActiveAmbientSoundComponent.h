#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ActiveAmbientInstance.h"
#include "UObject/NoExportTypes.h"
#include "ActiveAmbientSoundComponent.generated.h"

class UActiveAmbientUpdater;
class UWwiseEvent;
class UActiveAmbientLocationChooser;
class UActiveAmbientLocationValidator;

UCLASS(BlueprintType, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UActiveAmbientSoundComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartEvent;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval LoopDuration;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ExpiredStopEvent;
    
    UPROPERTY(EditAnywhere)
    float ExpiredStopFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 TargetSimultaneousInstances;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval RepopulateDelay;
    
    UPROPERTY(EditAnywhere, Instanced)
    UActiveAmbientLocationChooser* LocationChooser;
    
    UPROPERTY(EditAnywhere, Instanced)
    UActiveAmbientLocationValidator* LocationValidator;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UActiveAmbientUpdater*> Updaters;
    
    UPROPERTY(EditAnywhere)
    bool bWaryOfPlayers;
    
    UPROPERTY(EditAnywhere)
    float WaryDistance;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WaryStopEvent;
    
    UPROPERTY(EditAnywhere)
    float WaryStopFadeTime;
    
    UPROPERTY(EditAnywhere)
    float StartleRecoveryTime;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartedStopEvent;
    
    UPROPERTY(EditAnywhere)
    float StartledStopFadeTime;
    
    UPROPERTY(Transient)
    TArray<FActiveAmbientInstance> ActiveAmbientInstances;
    
    UPROPERTY(Transient)
    float NextSpawnTime;
    
    UPROPERTY(Transient)
    float TimeSinceLastSpawn;
    
    UPROPERTY(Transient)
    float RemainingStartleRecovery;
    
    UActiveAmbientSoundComponent();
    UFUNCTION(BlueprintCallable)
    void Startle(const FVector& Location, float Radius);
    
};

