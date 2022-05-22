#pragma once
#include "CoreMinimal.h"
#include "ParticlePropertyTracker.generated.h"

class UMaterialInstanceDynamic;
class UParticlePropertyTrackingData;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FParticlePropertyTracker {
    GENERATED_BODY()
public:
    UPROPERTY()
    UParticlePropertyTrackingData* TrackingData;
    
    UPROPERTY()
    UParticleSystem* Template;
    
    UPROPERTY()
    FName Tag;
    
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    float FloatParamValue;
    
    UPROPERTY()
    float LastUpdateTime;
    
    UPROPERTY()
    UMaterialInstanceDynamic* Material;
    
    UPROPERTY()
    FName MaterialPropertyName;
    
    GBXGAMESYSTEMCORE_API FParticlePropertyTracker();
};

