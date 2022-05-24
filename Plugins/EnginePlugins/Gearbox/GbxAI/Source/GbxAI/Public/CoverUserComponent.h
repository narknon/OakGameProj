#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECoverUserState.h"
#include "Components/ActorComponent.h"
#include "InspectionInfoProvider.h"
#include "CoverStateDelegateDelegate.h"
#include "CoverAction.h"
#include "AITicketUseData.h"
#include "CoverFaceDirections.h"
#include "SavedCollision.h"
#include "CoverClientData.h"
#include "CoverStyleUserData.h"
#include "GbxParam.h"
#include "Engine/EngineTypes.h"
#include "CoverUserComponent.generated.h"

class AGbxAIController;
class USkeletalMeshComponent;
class AGbxCharacter;
class UDamageComponent;
class UGbxNavComponent;
class UStanceComponent;
class UTargetingComponent;
class UGbxNavCharacterMovementComponent;
class UAIWeaponUserComponent;
class UHitReactionLayer;
class UGbxCoverTransitionTable;
class ACharacter;
class UCoverStyleData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXAI_API UCoverUserComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCoverStateDelegate OnCoverStateChanged;
    
private:
    UPROPERTY(Transient)
    FCoverAction DesiredAction;
    
    UPROPERTY(Transient)
    FCoverAction CurrentAction;
    
    UPROPERTY(Transient)
    FCoverAction PreviousAction;
    
    UPROPERTY(Transient)
    ECoverUserState State;
    
    UPROPERTY(Transient)
    ECoverUserState DesiredState;
    
    UPROPERTY(Transient)
    FName TransitionName;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* SkelMeshComponent;
    
    UPROPERTY(Transient)
    AGbxCharacter* GbxCharacter;
    
    UPROPERTY(Transient)
    AGbxAIController* GbxAIController;
    
    UPROPERTY(Export, Transient)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(Export, Transient)
    UGbxNavComponent* GbxNavComponent;
    
    UPROPERTY(Export, Transient)
    UStanceComponent* StanceComponent;
    
    UPROPERTY(Export, Transient)
    UTargetingComponent* TargetingComponent;
    
    UPROPERTY(Export, Transient)
    UAIWeaponUserComponent* WeaponUserComponent;
    
    UPROPERTY(Export, Transient)
    UGbxNavCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(Transient)
    FSavedCollision SavedCollision;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ClientData)
    FCoverClientData ClientData;
    
    UPROPERTY(Transient)
    bool bFlanked;
    
    UPROPERTY(EditAnywhere)
    float MaxVerticalNavDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxHorizontalNavDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxDeltaLocationThreshold;
    
    UPROPERTY(EditAnywhere)
    float MaxDeltaRotationThreshold;
    
    UPROPERTY(EditAnywhere)
    float ExitInterpSearchDistance;
    
    UPROPERTY(EditAnywhere)
    float TransitionBetweenTraceHeight;
    
    UPROPERTY(EditAnywhere)
    float WidthAdjustment;
    
    UPROPERTY(EditAnywhere)
    float HeightAdjustment;
    
    UPROPERTY(EditAnywhere)
    bool bDisableFootIk;
    
    UPROPERTY(EditAnywhere)
    TArray<FCoverStyleUserData> Styles;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> FireToIdleStates;
    
    UPROPERTY(EditAnywhere)
    FGbxParam DefaultIdleTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam DefaultFireTime;
    
    UPROPERTY(EditAnywhere)
    FGbxParam DefaultWaitTimeBeforeSeekingBetterCover;
    
    UPROPERTY(EditAnywhere)
    FAITicketUseData TicketForAdvancingToBetterCover;
    
    UPROPERTY(EditAnywhere)
    FCoverFaceDirections FaceDirections;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UHitReactionLayer> HitReactionLayer;
    
    UPROPERTY(EditAnywhere)
    float TransitionBlendTime;
    
    UPROPERTY(EditAnywhere)
    float NearCoverDistance;
    
    UPROPERTY(EditAnywhere)
    UGbxCoverTransitionTable* EnterTransitionTable;
    
    UPROPERTY(EditAnywhere)
    UGbxCoverTransitionTable* BetweenTransitionTable;
    
public:
    UCoverUserComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetEnterTransitionTable(UGbxCoverTransitionTable* NewTable);
    
private:
    UFUNCTION()
    void OnRep_ClientData();
    
    UFUNCTION()
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
public:
    UFUNCTION(BlueprintPure)
    UCoverStyleData* GetStyle() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

