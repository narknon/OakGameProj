#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GbxCheatManager.generated.h"

class AActor;

UCLASS(Within=GbxPlayerController)
class GBXGAMESYSTEMCORE_API UGbxCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    uint8 bHLQNoClipActive: 1;
    
public:
    UGbxCheatManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Exec)
    void TestGameStage(int32 GameStageOverride);
    
    UFUNCTION(Exec)
    void StartPlayerInit();
    
    UFUNCTION(Exec)
    void ShowProjectileImpacts(float Size, float LifeTime);
    
    UFUNCTION(Exec)
    void SetDebugActorByName(const FString& ActorName);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugActor(AActor* Actor, int32 ControllerIndex);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_TogglePlayersOnly();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DamageTarget(float DamageAmount);
    
public:
    UFUNCTION(Exec)
    void PlayFeedbackRangedFromThere(const FString& FeedbackData);
    
    UFUNCTION(Exec)
    void PlayFeedbackDirectional(const FString& FeedbackData, float DirectionAngle);
    
    UFUNCTION(Exec)
    void PlayFeedback(const FString& FeedbackData, float Scale);
    
    UFUNCTION(Exec)
    void LogQatalystInfo() const;
    
    UFUNCTION(Exec)
    void DebugNextAI();
    
    UFUNCTION(Exec)
    void DamageAreaDebug() const;
    
    UFUNCTION(Exec)
    void ClearPlayerInit();
    
};

