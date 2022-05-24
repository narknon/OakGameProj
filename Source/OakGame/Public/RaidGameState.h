#pragma once
#include "CoreMinimal.h"
#include "OakGameState.h"
#include "EGameModeNotificationType.h"
#include "RaidGameState.generated.h"

class AOakPlayerState;
class UGbxHUDStateData;
class UHUDNotificationAsset;
class UGbxHUDData;

UCLASS()
class OAKGAME_API ARaidGameState : public AOakGameState {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRaidPlayerDied, AOakPlayerState*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRaidLegComplete, int32, LegNumber);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRaidCountdown, int32, CountdownRemaining);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRaidComplete);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRaidBegun, int32, CountdownDuration);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRaidAllPlayersDied);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNumSpectatablePlayersChanged, int32, NewNumSpectatable);
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* NotificationData;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* RaidStartNotificationData;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* RaidFailedNotificationData;
    
    UPROPERTY(EditAnywhere)
    UHUDNotificationAsset* RaidCountdownNotificationData;
    
    UPROPERTY(EditAnywhere)
    EGameModeNotificationType RaidSurvivedID;
    
    UPROPERTY(EditAnywhere)
    EGameModeNotificationType RaidDefeatID;
    
    UPROPERTY(EditAnywhere)
    EGameModeNotificationType RaidStartID;
    
    UPROPERTY(EditAnywhere)
    EGameModeNotificationType RaidCountdownID;
    
    UPROPERTY(EditAnywhere)
    UGbxHUDData* SpectatorHUDData;
    
    UPROPERTY(EditAnywhere)
    UGbxHUDStateData* SpectatorHUDState;
    
    UPROPERTY(EditAnywhere)
    int32 RaidBeginningNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText RaidBeginningNotificationText;
    
    UPROPERTY(EditAnywhere)
    int32 LegCompleteNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText LegCompleteNotificationText;
    
    UPROPERTY(EditAnywhere)
    int32 RaidCompleteNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText RaidCompleteNotificationText;
    
    UPROPERTY(EditAnywhere)
    int32 PlayerDiedNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText PlayerDiedNotificationText;
    
    UPROPERTY(EditAnywhere)
    int32 TeamWipeNotificationPriority;
    
    UPROPERTY(EditAnywhere)
    FText TeamWipeNotificationText;
    
    UPROPERTY(BlueprintAssignable)
    FOnRaidPlayerDied OnPlayerDied;
    
    UPROPERTY(BlueprintAssignable)
    FOnRaidAllPlayersDied OnAllPlayersDied;
    
    UPROPERTY(BlueprintAssignable)
    FOnRaidBegun OnRaidBegun;
    
    UPROPERTY(BlueprintAssignable)
    FOnRaidLegComplete OnRaidLegComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnRaidComplete OnRaidComplete;
    
    UPROPERTY(BlueprintAssignable)
    FOnRaidCountdown OnRaidCountdown;
    
    UPROPERTY()
    FOnNumSpectatablePlayersChanged OnNumSpectatablePlayersChanged;
    
protected:
    UPROPERTY(Transient)
    int32 RaidCountdown;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_NumSpectatablePlayers)
    int32 NumSpectatablePlayers;
    
public:
    ARaidGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_NumSpectatablePlayers();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastRaidComplete();
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastRaidBegun(int32 CountdownDuration);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastPlayerDied(AOakPlayerState* PlayerState);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastLegComplete(int32 LegNumber);
    
    UFUNCTION(NetMulticast, Reliable)
    void BroadcastAllPlayersDied();
    
};

