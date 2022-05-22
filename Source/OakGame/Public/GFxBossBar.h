#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "EBossbarEventType.h"
#include "HealthTypeDepletedDetails.h"
#include "HealthType.h"
#include "BossbarEventData.h"
#include "GFxBossBar.generated.h"

class UGbxGFxProgressBar;
class UGFxNameplate;
class UOakDamageComponent;
class AOakGameState;
class AOakCharacter;
class UGbxGFxObject;
class APawn;
class AActor;

UCLASS()
class UGFxBossBar : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UGbxGFxProgressBar*> AdditionalBars;
    
private:
    UPROPERTY(Transient)
    UGFxNameplate* Nameplate;
    
    UPROPERTY(Transient)
    AOakGameState* OakGameState;
    
    UPROPERTY(Export, Transient)
    UOakDamageComponent* BossDamageComponent;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> BarClips;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> ActiveSectionClips;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxProgressBar*> FocusableProgressBars;
    
    UPROPERTY(Transient)
    AOakCharacter* CachedBoss;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NameplateBars;
    
    UPROPERTY(EditAnywhere)
    FString NameplateBarsID;
    
    UPROPERTY(EditAnywhere)
    FString PathToTopFocusableBar;
    
    UPROPERTY(EditAnywhere)
    FString PathToMidFocusableBar;
    
    UPROPERTY(EditAnywhere)
    FString PathToBotFocusableBar;
    
    UPROPERTY(Transient)
    FString FadeInSingle;
    
    UPROPERTY(Transient)
    FString FadeInDouble;
    
    UPROPERTY(Transient)
    FString FadeInTriple;
    
    UPROPERTY(Transient)
    FString DeathAnimation;
    
    UPROPERTY(EditAnywhere)
    FText LevelPrefix;
    
public:
    UGFxBossBar();
private:
    UFUNCTION()
    void UpdateEventDelegates() const;
    
public:
    UFUNCTION()
    void UpdateActiveSelectionClips() const;
    
    UFUNCTION()
    void SetNewBossTarget(AOakCharacter* NewTarget) const;
    
private:
    UFUNCTION()
    void SetFocusedBar(const FString& FocusedBarFrame) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static void PlayEventOnBossBar(AOakCharacter* BossBarCharacter, EBossbarEventType BossBarEvent) const;
    
private:
    UFUNCTION()
    void OnPawnChanged(APawn* Pawn, APawn* OldPawn) const;
    
    UFUNCTION()
    void OnHealthTypeDepeleted(const FHealthTypeDepletedDetails& Details) const;
    
    UFUNCTION()
    void OnHealthTypeAdded(const FHealthType& HealthType, int32 Index) const;
    
    UFUNCTION()
    void OnBossDestroy(AActor* DestroyedActor) const;
    
public:
    UFUNCTION()
    void HideAllSelectionClips() const;
    
    UFUNCTION()
    void HandleEventOnBossBar(const FBossbarEventData& EventData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnableBossBar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DisableBossBar() const;
    
};

