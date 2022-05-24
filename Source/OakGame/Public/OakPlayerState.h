#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/OnlineReplStructs.h"
#include "NameplateInfoProviderInterface.h"
#include "HealthType.h"
#include "EHealthState.h"
#include "ETradeRequestReceptionType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMatchmakingError.h"
#include "OakPlayerState.generated.h"

class UPlayerClassIdentifier;
class ULocalMessage;

UCLASS()
class OAKGAME_API AOakPlayerState : public APlayerState, public INameplateInfoProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(ReplicatedUsing=OnRep_ShiftUniqueId)
    FUniqueNetIdRepl ShiftUniqueId;
    
    UPROPERTY(Replicated)
    TArray<FHealthType> HealthInformation;
    
    UPROPERTY(ReplicatedUsing=OnRep_PlayerLevel)
    int32 Level;
    
    UPROPERTY(ReplicatedUsing=OnRep_PlayerClass)
    UPlayerClassIdentifier* PlayerClass;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsRaidSpectating)
    bool bIsRaidSpectating;
    
    UPROPERTY(Replicated)
    EHealthState HealthState;
    
    UPROPERTY(Replicated)
    bool bHasShieldEquipped;
    
    UPROPERTY(Replicated)
    float MusicThreatLevel;
    
    UPROPERTY(Replicated)
    bool bDuelingEnabled;
    
    UPROPERTY(Replicated)
    ETradeRequestReceptionType TradeRequestReceptionType;
    
    UPROPERTY(Replicated)
    bool bHasPossessionOfPawn;
    
    UPROPERTY(Replicated)
    bool bHasFullControlOfPawn_ForSonyRTMP;
    
    UPROPERTY()
    TSubclassOf<ULocalMessage> LevelSyncMessageClass;
    
    UPROPERTY(Replicated)
    bool bPhotoModeActive;
    
    UPROPERTY(Replicated)
    FGuid PlayerCharacterGuid;
    
    UPROPERTY(ReplicatedUsing=OnRep_PlayerHeadsetPresent)
    bool bIsHeadsetPresent;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_PlayerLocation)
    FVector PlayerLocation;
    
    UPROPERTY(Replicated)
    FRotator PlayerRotation;
    
public:
    AOakPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetShiftUniqueId(const FUniqueNetIdRepl& InShiftUniqueId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetPlayerClass(UPlayerClassIdentifier* InPlayerClass);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetIsHeadsetPresent(bool InHeadsetPresent);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReportClientMatchmakingError(EMatchmakingError Error);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerPlayerDisplayDataChanged();
    
protected:
    UFUNCTION()
    void OnRep_ShiftUniqueId();
    
    UFUNCTION()
    void OnRep_PlayerLocation();
    
    UFUNCTION()
    void OnRep_PlayerLevel();
    
    UFUNCTION()
    void OnRep_PlayerHeadsetPresent();
    
    UFUNCTION()
    void OnRep_PlayerDownStateExitReason();
    
    UFUNCTION()
    void OnRep_PlayerClass();
    
    UFUNCTION()
    void OnRep_IsRaidSpectating();
    
public:
    UFUNCTION(BlueprintPure)
    FRotator GetTargetActorRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetActorLocation() const;
    
    UFUNCTION(Client, Reliable)
    void ClientMatchmakingConfirmPendingReservation(FName NewBeaconName, const FString& NewBeaconURL, const FString& ActivityGuid, bool bBackfillOnly);
    
    
    // Fix for true pure virtual functions not being implemented
};

