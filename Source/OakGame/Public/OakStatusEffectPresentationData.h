#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "OakStatusEffectPresentation_Audio.h"
#include "OakStatusEffectPresentation_Particle.h"
#include "OakStatusEffectPresentation_ScreenParticle.h"
#include "OakStatusEffectPresentation_Material.h"
#include "OakStatusEffectPresentationData.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UOakStatusEffectPresentationData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bUsesThirdPersonParticles;
    
    UPROPERTY(EditDefaultsOnly)
    FOakStatusEffectPresentation_Particle ParticlePresentation;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUsesScreenParticle;
    
    UPROPERTY(EditDefaultsOnly)
    FOakStatusEffectPresentation_ScreenParticle ScreenParticlePresentation;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUsesMaterialParameter;
    
    UPROPERTY(EditDefaultsOnly)
    FOakStatusEffectPresentation_Material MaterialPresentation;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUsesAudioEvents;
    
    UPROPERTY(EditDefaultsOnly)
    FOakStatusEffectPresentation_Audio AudioPresentation;
    
public:
    UOakStatusEffectPresentationData();
};

