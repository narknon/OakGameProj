#pragma once
#include "CoreMinimal.h"
#include "WwiseGameObjectComponent.h"
#include "EWwiseCurveInterpolation.h"
#include "WwiseListenerComponent.generated.h"

class UWwiseEvent;
class UWwiseListenerComponent;
class UWwiseRtpc;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWISEAUDIO_API UWwiseListenerComponent : public UWwiseGameObjectComponent {
    GENERATED_BODY()
public:
    UWwiseListenerComponent();
    UFUNCTION(BlueprintCallable)
    void SetBusRTPCValue(UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, EWwiseCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable)
    static UWwiseListenerComponent* FindAssociatedListener(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void ConfigureListener(UWwiseEvent* WwiseEvent);
    
};

