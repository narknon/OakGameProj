#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FaceFXAudioComponent.generated.h"

class UWwiseAudioComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FACEFX_API UFaceFXAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TWeakObjectPtr<UWwiseAudioComponent> WwiseAudioComponent;
    
public:
    UFaceFXAudioComponent();
};

