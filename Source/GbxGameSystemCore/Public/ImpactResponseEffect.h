#pragma once
#include "CoreMinimal.h"
#include "GbxSignificanceEvent.h"
#include "ImpactResponseParams.h"
#include "ImpactResponseEffect.generated.h"

class UMaterialInterface;
class UImpactData;
class UWwiseEvent;
class UParticleSystem;
class UFeedbackData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FImpactResponseEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHighPriority;
    
    UPROPERTY(EditAnywhere)
    bool bCensorThisEffect;
    
    UPROPERTY(EditAnywhere)
    UImpactData* CensoredEffectAlternative;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideImpactWwiseEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* ImpactWwiseEvent;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleTemplate;
    
    UPROPERTY(EditAnywhere)
    uint8 bAttachParticleToHitActor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAttachParticleToHitBone: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHideEffectFromHitActor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bNoOverlapDecal: 1;
    
    UPROPERTY(EditAnywhere)
    FName NoOverlapDecalGroupName;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInterface*> DecalMaterials;
    
    UPROPERTY(EditAnywhere)
    float DecalWidth;
    
    UPROPERTY(EditAnywhere)
    float DecalHeight;
    
    UPROPERTY(EditAnywhere)
    float DecalThickness;
    
    UPROPERTY(EditAnywhere)
    float DecalMinScale;
    
    UPROPERTY(EditAnywhere)
    float DecalMaxScale;
    
    UPROPERTY(EditAnywhere)
    bool bDecalRandomRotation;
    
    UPROPERTY(EditAnywhere)
    float DecalRandomRotationLimit;
    
    UPROPERTY(EditAnywhere)
    float DecalLifetime;
    
    UPROPERTY(EditAnywhere)
    float DecalFadeDuration;
    
    UPROPERTY(EditAnywhere)
    FGbxSignificanceEvent SignificanceEvent;
    
    UPROPERTY(EditAnywhere)
    bool bPlayFeedbackOnHitActor;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* HitFeedback;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* AreaFeedback;
    
    UPROPERTY()
    FImpactResponseParams EffectParameters;
    
    FImpactResponseEffect();
};

