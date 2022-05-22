#pragma once
#include "CoreMinimal.h"
#include "IncomingDamagePresentationGenericData.h"
#include "IncomingDamagePresentationGlobalInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FIncomingDamagePresentationGlobalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenParticleHealth;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenParticleShield;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenParticleArmor;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenParticleHealth_SplitScreen;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenParticleShield_SplitScreen;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenParticleArmor_SplitScreen;
    
    UPROPERTY(EditAnywhere)
    FName DirectionalParticleEventName;
    
    UPROPERTY(EditAnywhere)
    FName DirectionalEmitterName;
    
    UPROPERTY(EditAnywhere)
    int32 MaxNumDirectionalParticles;
    
    UPROPERTY(EditAnywhere)
    FName FullParticleEventName;
    
    UPROPERTY(EditAnywhere)
    FName FullEmitterName;
    
    UPROPERTY(EditAnywhere)
    FName DamageSeverityParameterName;
    
    UPROPERTY(EditAnywhere)
    FName DamageDirectionParameterName;
    
    UPROPERTY(EditAnywhere)
    float DamageParticleDirectionQuantization;
    
    UPROPERTY(EditAnywhere)
    float AspectRatioThresholdToUseWidescreenParticles;
    
    UPROPERTY(EditAnywhere)
    float FlinchAnimationStregthNoise;
    
    UPROPERTY(EditAnywhere)
    float FlinchAnimationAngleNoise;
    
    UPROPERTY(EditAnywhere)
    float RadialBlurMaxDistance;
    
    UPROPERTY(EditAnywhere)
    FIncomingDamagePresentationGenericData PresentationLevels[4];
    
    OAKGAME_API FIncomingDamagePresentationGlobalInfo();
};

