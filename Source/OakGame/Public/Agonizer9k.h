#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EA9KFightPhase.h"
#include "OakCharacter_Default.h"
#include "OnFloorDoneDelegate.h"
#include "CancelSawDelegate.h"
#include "EA9KSawState.h"
#include "OnSawStateChangeDelegate.h"
#include "EquiptProjectileSawDelegate.h"
#include "OnShootProjectileDelegate.h"
#include "Agonizer9k.generated.h"

class UBlackboardComponent;
class APawn;

UCLASS()
class OAKGAME_API AAgonizer9k : public AOakCharacter_Default {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Replicated)
    EA9KFightPhase FightPhase;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FRotator SawTargetRotation;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    APawn* SawTarget;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    EA9KSawState SawState;
    
    UPROPERTY(EditAnywhere)
    float SawAngleReached;
    
    UPROPERTY(BlueprintAssignable)
    FOnSawStateChange OnSawStateChanged;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeSinceBeginingOfPhase;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeSinceBeginingOfFight;
    
    UPROPERTY(BlueprintReadOnly)
    float TimeSinceLastSponsorBegan;
    
    UPROPERTY(BlueprintAssignable)
    FEquiptProjectileSaw EquiptProjectileSaw;
    
    UPROPERTY(BlueprintAssignable)
    FCancelSaw CancelSaw;
    
    UPROPERTY(BlueprintAssignable)
    FOnShootProjectile ShootProjectile;
    
    UPROPERTY(BlueprintAssignable)
    FOnShootProjectile ShootProjectileSaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SawTargetBlackboardKeyName;
    
    UPROPERTY(BlueprintAssignable)
    FOnFloorDone OnFloorDoneEvent;
    
private:
    UPROPERTY(EditAnywhere, Export)
    UBlackboardComponent* Blackboard;
    
    UPROPERTY(EditAnywhere)
    float SawTimeCooldown;
    
    UPROPERTY(EditAnywhere)
    float SawRotateSpeedTryToReachTarget;
    
    UPROPERTY(EditAnywhere)
    float SawTimeBetweenReachAndEquip;
    
    UPROPERTY(EditAnywhere)
    float SawTimeAnticipation;
    
    UPROPERTY(EditAnywhere)
    float SawPercentageStopFollowAnticipation;
    
    UPROPERTY(EditDefaultsOnly)
    float WaitForEquipAnimDoneFailSafe;
    
public:
    AAgonizer9k();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopSaw();
    
    UFUNCTION(BlueprintCallable)
    void StartSponsorsTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartSaw();
    
    UFUNCTION(BlueprintCallable)
    void StartBossFight();
    
    UFUNCTION(BlueprintCallable)
    void ResetBossTimers();
    
    UFUNCTION(BlueprintCallable)
    void EquipSawAnimDone();
    
};

