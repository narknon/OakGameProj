#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "EVoiceOfGodSpeaker.h"
#include "OakVoiceOfGodComponent.generated.h"

class UMaterialInstance;
class UParticleSystem;
class UGbxMediaData;
class UMaterialInstanceDynamic;
class UCharacterEchoData;
class UMediaPlayer;
class UScreenParticleManagerComponent;
class UPerformanceEchoData;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakVoiceOfGodComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName VoGTextureParamName;
    
    UPROPERTY()
    FName VoGSpeakerParamName;
    
    UPROPERTY(EditAnywhere)
    FName VoGFadeName;
    
    UPROPERTY(EditAnywhere)
    FName VoGMaterialName;
    
    UPROPERTY(EditAnywhere)
    float MaxFadeTime;
    
    UPROPERTY(EditAnywhere)
    float ParticleDepth;
    
    UPROPERTY(EditAnywhere)
    FRotator MaxRotationLag;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstance* LilithMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstance* TannisMaterial;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenParticle;
    
private:
    UPROPERTY(EditAnywhere)
    UGbxMediaData* MediaData;
    
    UPROPERTY(Transient)
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(Export, Transient)
    UScreenParticleManagerComponent* ScreenParticleManagerComponent;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* LilithMaterialInstanceDynamic;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* TannisMaterialInstanceDynamic;
    
public:
    UOakVoiceOfGodComponent();
private:
    UFUNCTION()
    void OnEchoStarted(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, const FString& MoodKeyframe, const FString& VoGMoodKey, EVoiceOfGodSpeaker VoGSpeakerID, bool bIsNewEcho);
    
    UFUNCTION()
    void OnEchoFinished(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, bool bCompleted);
    
};

