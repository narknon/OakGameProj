#pragma once
#include "CoreMinimal.h"
#include "OakStreamingInteractionEvent.h"
#include "GameplayTagContainer.h"
#include "DialogTimeSlotReference.h"
#include "PollActionInfo.h"
#include "OakStreamingInteractionEvent_EnemySpawn.generated.h"

class AGbxCharacter;
class UInWorldIconData;
class UGbxUIName;
class AOakCharacter;
class AActor;
class UOakMissionIconComponent;
class USpawnerComponent;

UCLASS()
class UOakStreamingInteractionEvent_EnemySpawn : public UOakStreamingInteractionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AllowedTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer DisallowedTags;
    
    UPROPERTY(EditAnywhere)
    int32 NbOfKillsBeforeActivation;
    
    UPROPERTY(EditAnywhere)
    float MaxEventDuration;
    
    UPROPERTY(EditAnywhere)
    float JoinTimerDuration;
    
    UPROPERTY(EditAnywhere)
    float EnemyInfoUpdateTimer;
    
    UPROPERTY(EditAnywhere)
    UInWorldIconData* EnemyWorldIconData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<AOakCharacter>> BlacklistedEnemyClasses;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UGbxUIName>> BlacklistedUINames;
    
    UPROPERTY(EditAnywhere)
    FPollActionInfo SpawnAction;
    
    UPROPERTY(EditAnywhere)
    FText PlayerWonEndEvent;
    
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference PlayerWonEndEventDialog;
    
    UPROPERTY(EditAnywhere)
    FText NeutralEndEvent;
    
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference NeutralEndEventDialog;
    
    UPROPERTY(EditAnywhere)
    FText PlayerLostEndEvent;
    
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference PlayerLostEventDialog;
    
    UPROPERTY(EditAnywhere)
    float PollTimerDuration;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenPollsTimerDuration;
    
    UPROPERTY(EditAnywhere)
    int32 MaxItemInPoll;
    
    UPROPERTY(EditAnywhere)
    TArray<FPollActionInfo> PollAvailableActions;
    
    UPROPERTY(EditAnywhere)
    FText SpawnWait;
    
    UPROPERTY(EditAnywhere)
    FText PollStarted;
    
    UPROPERTY(EditAnywhere)
    FText PollSelected;
    
    UPROPERTY(EditAnywhere)
    FText PollEnded;
    
    UPROPERTY(EditAnywhere)
    FText EventWin;
    
    UPROPERTY(EditAnywhere)
    FText EventLose;
    
    UPROPERTY(EditAnywhere)
    FText EventDraw;
    
    UPROPERTY(EditAnywhere)
    FText EventMapExited;
    
    UPROPERTY(EditAnywhere)
    FText EventTimeout;
    
private:
    UPROPERTY(Transient)
    int32 NbSpawner;
    
    UPROPERTY(Transient)
    int32 LastActivationKillCount;
    
    UPROPERTY(Transient)
    AGbxCharacter* EventEnemy;
    
    UPROPERTY(Transient)
    FString EnemyViewerName;
    
    UPROPERTY(Transient)
    TArray<AActor*> SpawnerRefArray;
    
    UPROPERTY(Export, Transient)
    TArray<UOakMissionIconComponent*> DebugSpawnerWaypoints;
    
    UPROPERTY(Transient)
    int32 PollID;
    
public:
    UOakStreamingInteractionEvent_EnemySpawn();
    UFUNCTION(BlueprintCallable)
    void SetEnemy(AGbxCharacter* Enemy);
    
    UFUNCTION()
    void OnPlayerDead();
    
    UFUNCTION()
    void OnEnemySuspend(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
    UFUNCTION()
    void OnEnemySpawned(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
    UFUNCTION()
    void OnEnemyDied(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
};

