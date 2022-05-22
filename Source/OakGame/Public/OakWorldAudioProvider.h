#pragma once
#include "CoreMinimal.h"
#include "WwiseEnvironmentalEffectProvider.h"
#include "GameFramework/Actor.h"
#include "OakWorldAudioProvider.generated.h"

class UWwiseAuxBus;
class UCurveFloat;
class UOakAudioGlobalsData;

UCLASS()
class AOakWorldAudioProvider : public AActor, public IWwiseEnvironmentalEffectProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseAuxBus* GlobalEfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WetPercentMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverbScaleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReverbTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UWwiseAuxBus*> ChildAuxBusses;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* OutdoornessOcclusionStrengthCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* OutdoornessDistanceReverbFactorCurve;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ReverbOverDistanceShapeCurve;
    
    UPROPERTY(EditAnywhere)
    float ReverbOverDistanceMaxRange;
    
    UPROPERTY(EditAnywhere)
    float GlobalWetnessScaleDB;
    
    UPROPERTY(EditAnywhere)
    UWwiseAuxBus* InteriorShort;
    
    UPROPERTY(EditAnywhere)
    float InteriorShortDuration;
    
    UPROPERTY(EditAnywhere)
    float InteriorShortWetnessScaleDB;
    
    UPROPERTY(EditAnywhere)
    UWwiseAuxBus* InteriorLong;
    
    UPROPERTY(EditAnywhere)
    float InteriorLongDuration;
    
    UPROPERTY(EditAnywhere)
    float InteriorLongWetnessScaleDB;
    
    UPROPERTY(EditAnywhere)
    UWwiseAuxBus* OutdoorShort;
    
    UPROPERTY(EditAnywhere)
    float OutdoorShortDuration;
    
    UPROPERTY(EditAnywhere)
    float OutdoorShortWetnessScaleDB;
    
    UPROPERTY(EditAnywhere)
    UWwiseAuxBus* OutdoorLong;
    
    UPROPERTY(EditAnywhere)
    float OutdoorLongDuration;
    
    UPROPERTY(EditAnywhere)
    float OutdoorLongWetnessScaleDB;
    
private:
    UPROPERTY(Transient)
    UOakAudioGlobalsData* CachedAudioGlobals;
    
public:
    AOakWorldAudioProvider();
    UFUNCTION(BlueprintCallable)
    void PushEffect(UWwiseAuxBus* Efx);
    
    UFUNCTION(BlueprintCallable)
    void PopEffect(UWwiseAuxBus* Efx);
    
    
    // Fix for true pure virtual functions not being implemented
};

