#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "GenericTeamAgentInterface.h"
#include "EPawnAttachStatus.h"
#include "FoleyImplementerInterface.h"
#include "GameplayTagAssetInterface.h"
#include "SavedCollision.h"
#include "SignificanceInterface.h"
#include "DamageCauserInterface.h"
#include "DamageableInterface.h"
#include "GameplayTaskOwnerInterface.h"
#include "EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "EnvQueryParamsProvider.h"
#include "SpawnCostSelection.h"
#include "GbxLevelSequenceControllableInterface.h"
#include "GameplayTagContainer.h"
#include "MassSelection.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "LandingDataSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedPawnAttachState.h"
#include "Kismet/KismetMathLibrary.h"
#include "FacingController.h"
#include "AnimGraphBoneSet.h"
#include "UObject/NoExportTypes.h"
#include "LandingInfo.h"
#include "GameplayTagContainer.h"
#include "GbxCharacter.generated.h"

class AGbxPlayerController;
class UTargetingComponent;
class AGbxCharacter;
class UBlackboardComponent;
class USkeletalMeshComponent;
class UTargetableComponent;
class UGbxCharacterMovementComponent;
class UDamageComponent;
class UFoleyMainComponent;
class UDamageCauserComponent;
class AActor;
class UFoleyAccessoryComponent;
class UGbxActionComponent;
class UGameplayTagContainerComponent;
class UDynamicPhysicalAnimationComponent;
class UGbxPerceptionComponent;
class UFirstPersonComponent;
class ULandingData;
class UImpactData;
class AAIController;
class UGbxSkeletalMeshComponent;
class UGbxBoneSet;
class USceneComponent;
class UPawnAttachSlotComponent;
class UInputComponent;
class UTeam;
class UGameplayTasksComponent;
class ULevelSequencePlayer;
class UGbxUIName;
class UCharacterSoundTag;
class UTeamComponent;
class UBlackboardData;

UCLASS()
class GBXGAMESYSTEMCORE_API AGbxCharacter : public ACharacter, public IGenericTeamAgentInterface, public IFoleyImplementerInterface, public IGameplayTagAssetInterface, public ISignificanceInterface, public IGameplayTaskOwnerInterface, public IDamageableInterface, public IDamageCauserInterface, public IEQSQueryResultSourceInterface, public IEnvQueryParamsProvider, public IGbxLevelSequenceControllableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGbxCharacterMovementComponent* GbxCharacterMovement;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTargetableComponent* TargetableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDamageCauserComponent* DamageCauserComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGbxActionComponent* GbxAction;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGameplayTagContainerComponent* GameplayTagContainerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UDynamicPhysicalAnimationComponent* DynamicPhysicalAnimationComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UTargetingComponent* TargetingComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UGbxPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UFirstPersonComponent* FirstPersonComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ULandingData* LandingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UImpactData* JumpedImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPlayJumpAndLandImpactsOnAllFeet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UImpactData* FootstepImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UImpactData* GenericHandImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UImpactData* LadderHandImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> FootstepSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> HandAccessoryTags;
    
    UPROPERTY(BlueprintAssignable)
    FLandingDataSignature LandingDataTriggeredDelegate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGbxPlayerController* OwnerPlayerController;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AAIController* OwnerAIController;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGbxCharacter* PlayerMaster;
    
    UPROPERTY(Transient)
    TArray<AGbxCharacter*> Pets;
    
    UPROPERTY(EditAnywhere)
    FMassSelection CharacterMass;
    
    UPROPERTY(EditAnywhere)
    FSpawnCostSelection SpawnCostSelection;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGbxSkeletalMeshComponent* GbxMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOrientEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ViewSocket;
    
    UPROPERTY(Export, Transient)
    USceneComponent* ViewSocketComponent;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedPawnAttachState)
    FReplicatedPawnAttachState ReplicatedPawnAttachState;
    
    UPROPERTY(Transient)
    FReplicatedPawnAttachState PawnAttachState;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseAimHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomBaseAimHeight;
    
    UPROPERTY(Transient)
    float AimHeightFromGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrouchedAimHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomCrouchedAimHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AimEyeHeightPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName AimSocket;
    
    UPROPERTY(Export, Transient)
    USceneComponent* AimSocketComponent;
    
    UPROPERTY(Replicated, Transient)
    FFacingController FacingController;
    
    UPROPERTY(Replicated, Transient)
    uint8 ClientTurnDelta;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UInputComponent> InputComponentClass;
    
    UPROPERTY(Export, Transient)
    UFoleyAccessoryComponent* GestaltFoleyAccessory;
    
    UPROPERTY(Export, Transient)
    UFoleyMainComponent* CachedFoleyMainComponent;
    
private:
    UPROPERTY(Export, Transient)
    UGameplayTasksComponent* GameplayTasksComponent;
    
public:
    UPROPERTY(BlueprintReadOnly)
    ULevelSequencePlayer* LevelSequencePlayerController;
    
private:
    UPROPERTY(Transient)
    FSavedCollision LevelSequenceCollisionState;
    
protected:
    UPROPERTY(Transient)
    UGbxBoneSet* AnimGraphBoneSetFilter;
    
    UPROPERTY(Transient)
    TArray<FAnimGraphBoneSet> ActiveAnimGraphBoneSetFilterList;
    
    UPROPERTY(Transient)
    UGbxBoneSet* SmartObjectBoneSetFilter;
    
public:
    UPROPERTY(EditAnywhere)
    UGbxBoneSet* DefaultBoneSetFilter;
    
    UPROPERTY(Transient)
    UGbxBoneSet* ActionBoneSetFilter;
    
    UPROPERTY(EditAnywhere)
    bool bPauseAIWhileFalling;
    
    AGbxCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTeam(UTeam* Team) const;
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMaster(AGbxCharacter* NewPlayerMaster);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterUIName(const UGbxUIName* NewCharacterUIName);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterNameFromString(const FString& NewCharacterName);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterName(const FText& NewCharacterName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RotateCharacterTo(FRotator TargetRotation, float Duration, TEnumAsByte<EEasingFunc::Type> Easing);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void ReceiveOwnerPlayerControllerChanged(AGbxPlayerController* NewPlayerControllerOwner);
    
    UFUNCTION()
    void OnRep_ReplicatedPawnAttachState();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLandingDataTriggered(FLandingInfo LandingInfo, int32 Index);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_TriggerHitReactionSound(const UCharacterSoundTag* Tag);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_PlayLanded(const FHitResult& Hit, float ImpactSpeed, bool bLandFromJump, ULandingData* LandingDataOverride);
    
    UFUNCTION(NetMulticast, Unreliable)
    void NetMulticast_PlayJumped();
    
    UFUNCTION(BlueprintPure)
    bool IsZoomed() const;
    
    UFUNCTION(BlueprintPure)
    UTeamComponent* GetTeamComponent() const;
    
    UFUNCTION(BlueprintPure)
    UTeam* GetTeam() const;
    
    UFUNCTION(BlueprintPure)
    UTargetingComponent* GetTargetingComponent() const;
    
    UFUNCTION(BlueprintPure)
    UTargetableComponent* GetTargetableComponent() const;
    
    UFUNCTION(BlueprintPure)
    UGbxPerceptionComponent* GetPerceptionComponent() const;
    
    UFUNCTION(BlueprintPure)
    EPawnAttachStatus GetPawnAttachStatus() const;
    
    UFUNCTION(BlueprintPure)
    UPawnAttachSlotComponent* GetPawnAttachComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetPawnAttachActor() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtLocation(float& OutWeight) const;
    
    UFUNCTION(BlueprintPure)
    float GetLookAt(FVector& HeadLocation, FVector& EyeLocation, float& HeadWeight) const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetFirstPersonMesh() const;
    
    UFUNCTION(BlueprintPure)
    UFirstPersonComponent* GetFirstPersonComponent() const;
    
    UFUNCTION(BlueprintPure)
    UBlackboardComponent* GetBlackboardComponent() const;
    
    UFUNCTION(BlueprintPure)
    UBlackboardData* GetBlackboardAsset() const;
    
    UFUNCTION()
    void GetAvailableSocketNames(TArray<FName>& Array) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetAimVectorStartLocation() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetAimOffset() const;
    
    UFUNCTION(BlueprintPure)
    UFirstPersonComponent* FindFirstPersonComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachCharacter(EDetachmentRule LocationRule);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientRotateCharacterTo(FRotator TargetRotation, float Duration, TEnumAsByte<EEasingFunc::Type> Easing);
    
public:
    UFUNCTION(BlueprintCallable)
    void CauseEveryoneToForgetMe();
    
    UFUNCTION(BlueprintCallable)
    void AttachCharacterToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    
    UFUNCTION(BlueprintCallable)
    void AttachCharacterToActor(AActor* ParentActor, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
    
    
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

