#pragma once
#include "CoreMinimal.h"
#include "GFxCSSubMenu.h"
#include "GFxCSWhatsThisMenu.generated.h"

class ALevelSequenceActor;
class UGbxLevelSequence;
class UMaterialInterface;
class UParticleSystem;
class UWwiseEvent;
class UScreenParticleManagerComponent;
class ULevelSequencePlayer;

UCLASS()
class OAKCS_API UGFxCSWhatsThisMenu : public UGFxCSSubMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxLevelSequence* MovieSequencer;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* MediaMaterial;
    
    UPROPERTY(EditAnywhere)
    FName MaterialName;
    
    UPROPERTY(EditAnywhere)
    FName FadeName;
    
    UPROPERTY(EditAnywhere)
    FName ParticleSystemName;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenParticle;
    
    UPROPERTY(EditAnywhere)
    float ParticleDepth;
    
    UPROPERTY(EditAnywhere)
    float FadeTime;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartAudioSetupForMovieEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StopAudioSetupForMovieEvent;
    
    UPROPERTY(Export, Transient)
    UScreenParticleManagerComponent* ScreenParticleManagerComponent;
    
    UPROPERTY(Transient)
    ULevelSequencePlayer* MovieSequencePlayer;
    
    UPROPERTY(Transient)
    ALevelSequenceActor* MovieSequenceActor;
    
    UGFxCSWhatsThisMenu();
protected:
    UFUNCTION()
    void OnMovieMediaOpenFailed(const FString& FailedUrl) const;
    
    UFUNCTION()
    void OnMovieMediaOpened() const;
    
    UFUNCTION()
    void OnMovieEndReached() const;
    
};

