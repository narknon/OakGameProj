#pragma once
#include "CoreMinimal.h"
#include "EmitterWwiseEventRTPCParam.h"
#include "UObject/NoExportTypes.h"
#include "EmitterWwiseEvent.generated.h"

class UObject;
class UWwiseEvent;
class UWwiseSwitch;

USTRUCT(BlueprintType)
struct FEmitterWwiseEvent {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* ParamsProvider;
    
    UPROPERTY()
    UWwiseEvent* Event;
    
    UPROPERTY()
    TArray<FEmitterWwiseEventRTPCParam> RTPCs;
    
    UPROPERTY()
    TArray<UWwiseSwitch*> Switches;
    
    UPROPERTY()
    FVector PlaybackLocation;
    
    GBXGAMESYSTEMCORE_API FEmitterWwiseEvent();
};

