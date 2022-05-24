#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterialImpactPair.h"
#include "RigidBodyImpactSettings.generated.h"

class UImpactData;
class UPhysicalMaterial;
class UWwiseRtpc;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FRigidBodyImpactSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<FPhysicalMaterialImpactPair, UImpactData*> RigidBodyImpactData;
    
    UPROPERTY(EditAnywhere)
    TMap<UPhysicalMaterial*, UImpactData*> DefaultRigidBodyImpactData;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* ImpactSpeedAudioParameter;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* ImpactMassAudioParameter;
    
    FRigidBodyImpactSettings();
};

