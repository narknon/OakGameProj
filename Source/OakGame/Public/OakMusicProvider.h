#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WwiseMusicTiming.h"
#include "OakMusicProvider.generated.h"

class UWwiseAudioComponent;
class UObject;
class UOakMusicData;
class UOakMusicAmbientPerformer;
class AOakInventoryItemPickup;
class AOakMusicProvider;

UCLASS()
class AOakMusicProvider : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWwiseAudioComponent* MusicAudioComponent;
    
    UPROPERTY(Transient)
    float CurrentThreatLevel;
    
    UPROPERTY(Transient)
    float CurrentInterestLevel;
    
    UPROPERTY(Transient)
    UOakMusicData* AssociatedMusicData;
    
    UPROPERTY(Transient)
    UOakMusicAmbientPerformer* AmbientMusicPerformer;
    
    UPROPERTY(EditAnywhere)
    bool bManualMode;
    
    UPROPERTY(EditAnywhere)
    bool bForceLegacyCompatibility;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float ArtificialMinimumThreat;
    
    AOakMusicProvider();
    UFUNCTION(BlueprintCallable)
    void StopMusic();
    
    UFUNCTION(BlueprintCallable)
    void SetInterestLevel(float NewInterestLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetCombatLevel(float NewCombatLevel);
    
    UFUNCTION(BlueprintCallable)
    void PlayMusic(UOakMusicData* MusicData);
    
private:
    UFUNCTION()
    void OnMusicBeat(FWwiseMusicTiming& MusicTiming);
    
public:
    UFUNCTION()
    void NotifyMapAreaDiscovered();
    
    UFUNCTION()
    void NotifyItemSpotted(AOakInventoryItemPickup* InventoryItemPickup);
    
    UFUNCTION()
    void NotifyCombatIntensifies();
    
    UFUNCTION(BlueprintCallable)
    FString GetSectionName();
    
    UFUNCTION(BlueprintCallable)
    FString GetPartName();
    
    UFUNCTION(BlueprintCallable)
    static AOakMusicProvider* GetOakMusicProvider(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    FString GetLayerList();
    
    UFUNCTION(BlueprintPure)
    float GetInterestLevel() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentBeatDurationInSeconds();
    
    UFUNCTION(BlueprintPure)
    float GetCombatLevel() const;
    
    UFUNCTION(BlueprintCallable)
    float GetAudioTimeOfNextBeat();
    
    UFUNCTION(BlueprintCallable)
    float GetAudioTimeOfNextBar();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInterestModifier(float ModifierAmount, float ModifierDuration);
    
};

