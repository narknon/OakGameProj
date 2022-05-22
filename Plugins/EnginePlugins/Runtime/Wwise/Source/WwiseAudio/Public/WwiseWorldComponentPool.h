#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WwiseWorldComponentPool.generated.h"

class UWwiseAudioComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWISEAUDIO_API UWwiseWorldComponentPool : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    int32 DesiredPoolSize;
    
    UPROPERTY(Transient)
    int32 CurrentPoolSize;
    
    UPROPERTY(Export, Transient)
    TArray<UWwiseAudioComponent*> PooledComponents;
    
public:
    UWwiseWorldComponentPool();
};

