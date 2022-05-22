#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ConditionalAudioSwitch.h"
#include "VehicleEffectData.generated.h"

class UParticleSystem;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FVehicleEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UParticleSystem* ParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPlayerOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAutoActivate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPlayAudioAtLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RelativeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* StartAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseEvent* StopAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FConditionalAudioSwitch> ConditionalAudioSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AudioComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AudioEmitterRadius;
    
    OAKGAME_API FVehicleEffectData();
};

