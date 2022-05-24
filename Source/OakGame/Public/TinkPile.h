#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SmartObject.h"
#include "ETinkPileBuildOption.h"
#include "SmartObjectActionSet.h"
#include "ETinkPileUseState.h"
#include "TinkPile.generated.h"

class UOakSpawnerComponent;
class UOakSpawnPointComponent;
class UTeam;
class USkeletalMeshComponent;
class URegionBalanceStateComponent;
class UTerritoryComponent;
class USpawnOptionData;
class UAnimSequence;
class AGbxAIController;
class AActor;
class USpawnerComponent;

UCLASS()
class ATinkPile : public ASmartObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UOakSpawnerComponent* SpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    UOakSpawnPointComponent* SpawnPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Export)
    USkeletalMeshComponent* SkelMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    URegionBalanceStateComponent* RegionComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UTerritoryComponent* TerritoryComponent;
    
private:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    ETinkPileBuildOption StartState;
    
    UPROPERTY(EditDefaultsOnly)
    UTeam* DefaultTeam;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ETinkPileBuildOption, USpawnOptionData*> SpawnOptions;
    
    UPROPERTY(EditDefaultsOnly)
    FSmartObjectActionSet UnusedActionSet;
    
    UPROPERTY(EditDefaultsOnly)
    FSmartObjectActionSet UsedActionSet;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* Anim_UnusedIdle;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* Anim_UsedIdle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UAnimSequence*> Anim_Use;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequence* Anim_Reset;
    
    UPROPERTY(Transient)
    UTeam* CurrentTeam;
    
    UPROPERTY(Transient)
    FTimerHandle ResetTimerHandle;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_UseState)
    ETinkPileUseState UseState;
    
    UPROPERTY(Transient)
    AGbxAIController* CurrentAIOwner;
    
public:
    ATinkPile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartUsing(AActor* User);
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(UTeam* NewTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetStartState(ETinkPileBuildOption NewStartState);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBuildOption(ETinkPileBuildOption NewBuildOption);
    
    UFUNCTION(BlueprintCallable)
    void ResetUse();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTinkPileUseStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTinkPileUseFinished();
    
private:
    UFUNCTION()
    void OnRep_UseState();
    
    UFUNCTION()
    void OnActorSpawned(USpawnerComponent* SpawnerComp, AActor* Actor);
    
    UFUNCTION()
    void OnActorDied(USpawnerComponent* SpawnerComp, AActor* Actor);
    
public:
    UFUNCTION(BlueprintPure)
    ETinkPileUseState GetUseState() const;
    
    UFUNCTION(BlueprintCallable)
    void BuildObject();
    
};

