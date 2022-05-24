#pragma once
#include "CoreMinimal.h"
#include "ShieldAugment.h"
#include "UObject/NoExportTypes.h"
#include "ShieldAugment_Projected.generated.h"

class UMaterialInterface;
class UParticleSystem;
class UStaticMesh;
class UWwiseEvent;

UCLASS(EditInlineNew)
class UShieldAugment_Projected : public UShieldAugment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UStaticMesh* Mesh;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform ParticleSystemTransform;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* Template_OpenAndLoop;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* Template_Close;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* Template_Break;
    
    UPROPERTY(EditDefaultsOnly)
    FName CollisionProfileName;
    
    UPROPERTY(EditDefaultsOnly)
    FTransform RelativeTransform;
    
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* Material;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* ProjectedAudio;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* ProjectedStopAudio;
    
public:
    UShieldAugment_Projected();
};

