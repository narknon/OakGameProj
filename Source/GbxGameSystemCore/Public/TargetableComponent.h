#pragma once
#include "CoreMinimal.h"
#include "Perception/AISightTargetInterface.h"
#include "TargetLocationBoundsSettings.h"
#include "TeamComponent.h"
#include "TargetLocationSettings.h"
#include "ResourceLock.h"
#include "EAimAssistSnapTargetType.h"
#include "OverrideMeleeSocket.h"
#include "UObject/NoExportTypes.h"
#include "TargetableComponent.generated.h"

class UTargetingComponent;
class UGbxUIName;
class USceneComponent;
class AController;
class APawn;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UTargetableComponent : public UTeamComponent, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FResourceLock SightSenseLock;
    
    UPROPERTY(EditAnywhere)
    bool bSearchableByFindProjectileEQSTargetGenerator;
    
private:
    UPROPERTY(EditAnywhere)
    bool bIsTargetable;
    
    UPROPERTY(EditAnywhere)
    bool bIsTargetableByHumanPlayers;
    
    UPROPERTY(EditAnywhere)
    bool bIsTargetableByAIPlayers;
    
    UPROPERTY(EditAnywhere)
    bool bIsTargetableByNonPlayers;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyTargetableIfPlayersAreThreatened;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_TargetUIName)
    UGbxUIName* TargetUIName;
    
    UPROPERTY(Replicated)
    FText TargetName;
    
    UPROPERTY(EditAnywhere)
    FName TargetSocket;
    
    UPROPERTY(EditAnywhere)
    FTargetLocationBoundsSettings TargetSocketBounds;
    
    UPROPERTY(EditAnywhere)
    bool bUseTargetSocketBounds;
    
    UPROPERTY(EditAnywhere)
    TArray<FTargetLocationSettings> AdditionalTargetSockets;
    
    UPROPERTY(Export, Transient)
    TArray<UTargetingComponent*> TargetingMe;
    
    UPROPERTY(EditAnywhere)
    float CapsuleSections;
    
    UPROPERTY(Replicated, Transient)
    FResourceLock UntargetableLock;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> MeleeTargetingSockets;
    
    UPROPERTY(EditAnywhere)
    TArray<FOverrideMeleeSocket> ConditionalMeleeTargetingSockets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> TargetProxyComponents;
    
    UPROPERTY(Export)
    TArray<USceneComponent*> TargetProxies;
    
public:
    UPROPERTY(EditAnywhere)
    bool bAllowCharacterHoming;
    
    UPROPERTY(EditAnywhere)
    EAimAssistSnapTargetType AimAssistSnapTargetType;
    
    UPROPERTY(EditAnywhere)
    bool bTargetTracking;
    
    UPROPERTY(EditAnywhere)
    bool bDisableBulletMagnetism;
    
    UTargetableComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetUIName(const UGbxUIName* NewTargetUIName);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetName(const FText& NewTargetName);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTargetableByNonPlayers(bool NewIsTargetable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTargetableByHumanPlayers(bool NewIsTargetable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTargetableByAIPlayers(bool NewIsTargetable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTargetable(bool NewIsTargetable);
    
private:
    UFUNCTION()
    void OnRep_TargetUIName();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTargetableByPawn(const APawn* Pawn) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetableByNonPlayers() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetableByHumanPlayers() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetableByController(const AController* Controller) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetableByAIPlayers() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetableByActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetable() const;
    
    UFUNCTION(BlueprintPure)
    FName GetTargetSocketName() const;
    
private:
    UFUNCTION()
    void GetTargetProxyComponentNames(TArray<FName>& Array) const;
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetTargetNameString();
    
    UFUNCTION(BlueprintPure)
    TArray<FVector> GetTargetLocations() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetTargetLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetClosestTargetLocation(const FVector& Origin, const FVector& Direction) const;
    
private:
    UFUNCTION()
    void GetAvailableSocketNames(TArray<FName>& Array) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

