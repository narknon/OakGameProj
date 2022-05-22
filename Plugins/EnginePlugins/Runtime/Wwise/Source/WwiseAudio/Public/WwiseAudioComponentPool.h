#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EWwiseAudioComponentPoolMode.h"
#include "WwiseAudioComponentPool.generated.h"

class UWwiseAudioComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWISEAUDIO_API UWwiseAudioComponentPool : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxPoolSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWwiseAudioComponentPoolMode PoolMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRecycleComponents;
    
    UPROPERTY(Export, Transient)
    TArray<UWwiseAudioComponent*> ReservedComponents;
    
    UPROPERTY(Export, Transient)
    TArray<UWwiseAudioComponent*> ActiveComponents;
    
    UWwiseAudioComponentPool();
    UFUNCTION(BlueprintCallable)
    UWwiseAudioComponent* GetPooledComponent();
    
};

