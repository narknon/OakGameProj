#pragma once
#include "CoreMinimal.h"
#include "GbxThreatSystemInterface.h"
#include "GbxNavAvoidanceInterface.h"
#include "AIController.h"
#include "GameplayTagAssetInterface.h"
#include "Engine/EngineTypes.h"
#include "GbxEnvQueryHotSpotProviderInterface.h"
#include "GameplayTagContainer.h"
#include "EnvQueryParamsProvider.h"
#include "GbxLevelSequenceControllableInterface.h"
#include "UObject/NoExportTypes.h"
#include "OnAggroDelegate.h"
#include "OnDeAggroDelegate.h"
#include "GameplayTagContainer.h"
#include "GbxAIController.generated.h"

class UBlackboardComponent;
class AGbxCharacter;
class ASpawner;
class UTargetableComponent;
class UGbxCharacterMovementComponent;
class UTargetingComponent;
class UGbxSpawnerComponent;
class UTeamComponent;
class AActor;
class UAIActionComponent;
class UAIGroupState;
class UTerritoryComponent;
class UGbxNavComponent;
class UAIUseComponent;
class UAIWeaponUserComponent;
class UGbxActionComponent;
class USpawnerComponent;
class ACharacter;
class UGbxLevelSequencePlayer;
class UTeam;
class UAIPerceptionComponent;
class UBlackboardData;

UCLASS()
class GBXAI_API AGbxAIController : public AAIController, public IGameplayTagAssetInterface, public IGbxNavAvoidanceInterface, public IGbxEnvQueryHotSpotProviderInterface, public IGbxThreatSystemInterface, public IGbxLevelSequenceControllableInterface, public IEnvQueryParamsProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AGbxCharacter* GbxCharacter;
    
    UPROPERTY(Transient)
    FVector SpawnLocation;
    
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(Export, Transient)
    UTargetingComponent* TargetingComponent;
    
    UPROPERTY(Export, Transient)
    UTargetableComponent* TargetableComponent;
    
    UPROPERTY(Export, Transient)
    UTeamComponent* TeamComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAIActionComponent* AIActionComponent;
    
    UPROPERTY(Export, Transient)
    UTerritoryComponent* DefaultTerritory;
    
    UPROPERTY(Export, Transient)
    UTerritoryComponent* CurrentTerritory;
    
    UPROPERTY(Export, Transient)
    UGbxSpawnerComponent* SpawnerComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UGbxNavComponent* GbxNavComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAIUseComponent* AIUseComponent;
    
    UPROPERTY(Export, Transient)
    TArray<UAIWeaponUserComponent*> WeaponUserComponents;
    
    UPROPERTY(Export, Transient)
    UGbxActionComponent* GbxActionComponent;
    
    UPROPERTY(Transient)
    TArray<AActor*> ChildActors;
    
    UPROPERTY(BlueprintAssignable)
    FOnAggro OnAggro;
    
    UPROPERTY(BlueprintAssignable)
    FOnDeAggro OnDeAggro;
    
public:
    UPROPERTY(BlueprintReadOnly)
    UGbxLevelSequencePlayer* LevelSequencePlayerController;
    
    AGbxAIController();
    UFUNCTION(BlueprintCallable)
    void SetTerritory(UTerritoryComponent* Territory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTeam(UTeam* Team) const;
    
    UFUNCTION(BlueprintCallable)
    void SetObstacleAvoidanceLock(bool bDisable, const FName& Reason);
    
    UFUNCTION(BlueprintCallable)
    void ResetTerritoryToDefault();
    
private:
    UFUNCTION()
    void OnMyWeaponHitSomething(AActor* HitActor, FVector HitLocation);
    
public:
    UFUNCTION(BlueprintPure)
    UAIWeaponUserComponent* GetWeaponUserComponent() const;
    
    UFUNCTION(BlueprintPure)
    UAIUseComponent* GetUseComponent() const;
    
    UFUNCTION(BlueprintPure)
    UTerritoryComponent* GetTerritory() const;
    
    UFUNCTION(BlueprintPure)
    UTeamComponent* GetTeamComponent() const;
    
    UFUNCTION(BlueprintPure)
    UTeam* GetTeam() const;
    
    UFUNCTION(BlueprintPure)
    UTargetingComponent* GetTargetingComponent() const;
    
    UFUNCTION(BlueprintPure)
    UTargetableComponent* GetTargetableComponent() const;
    
    UFUNCTION(BlueprintPure)
    USpawnerComponent* GetSpawnerComponent() const;
    
    UFUNCTION(BlueprintPure)
    ASpawner* GetSpawner() const;
    
    UFUNCTION(BlueprintPure)
    UAIPerceptionComponent* GetPerceptionComponent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumChildActors() const;
    
    UFUNCTION(BlueprintPure)
    UGbxNavComponent* GetNavComponent() const;
    
    UFUNCTION(BlueprintPure)
    UGbxCharacterMovementComponent* GetMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    UAIGroupState* GetGroupState() const;
    
    UFUNCTION(BlueprintPure)
    AGbxCharacter* GetGbxCharacter() const;
    
    UFUNCTION(BlueprintPure)
    UGbxActionComponent* GetGbxActionComponent() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetChildActors() const;
    
    UFUNCTION(BlueprintPure)
    UBlackboardComponent* GetBlackboardComponent() const;
    
    UFUNCTION(BlueprintPure)
    UBlackboardData* GetBlackboardAsset() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAIGroupSize() const;
    
    UFUNCTION(BlueprintPure)
    void GetAIGroupList(TArray<AActor*>& AIGroupList, bool bIncludeSelf, float InRadius) const;
    
    UFUNCTION(BlueprintPure)
    UAIActionComponent* GetAIActionComponent() const;
    
private:
    UFUNCTION()
    void ChildDestroyed(AActor* DestroyedActor);
    
    UFUNCTION()
    void CheckPauseWhileFalling(ACharacter* TheCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddChildActors(const TArray<AActor*>& NewChildren);
    
    UFUNCTION(BlueprintCallable)
    void AddChildActor(AActor* NewChild);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

