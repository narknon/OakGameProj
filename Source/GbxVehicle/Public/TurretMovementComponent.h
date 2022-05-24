#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "WwisePlaybackInstance.h"
#include "UObject/NoExportTypes.h"
#include "TurretMovementComponent.generated.h"

class UWwiseEvent;
class UWwiseRtpc;
class APawn;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXVEHICLE_API UTurretMovementComponent : public UPawnMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FRotator TurretRelativeRotation;
    
    UPROPERTY(EditAnywhere)
    float MovementThresholdTolerance;
    
    UPROPERTY(EditAnywhere)
    float DurationBeforeStop;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* MovementStartEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* MovementStopEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseRtpc* MovementSpeedRTPC;
    
    UPROPERTY(Transient)
    FWwisePlaybackInstance MovementAudioPlaybackInst;
    
    UPROPERTY(Transient)
    float TimeSinceStop;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bReturnToZeroRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePlayersView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAimTowardsPlayersViewLocation;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FVector2D RotationInputs;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RotationMaxSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D RotationDamping;
    
    UPROPERTY(EditAnywhere)
    bool bEnableReturnToZeroRotationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ReturnToZeroRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bControlYawMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bControlPitchMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableMovementCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PivotSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdatedComponentRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePitchConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMinConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchMaxConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseYawConstraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawMinConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawMaxConstraint;
    
protected:
    UPROPERTY(Replicated, Transient)
    FRotator RemoteTurretRelativeRotation;
    
    UPROPERTY(DuplicateTransient, Transient)
    APawn* TurretControlOwner;
    
public:
    UTurretMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTurretControlDependency();
    
    UFUNCTION(BlueprintCallable)
    void UpdateParentInitialOffset();
    
    UFUNCTION(BlueprintCallable)
    void SetRotationInputs(float XValue, float YValue);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerSetRotationInputs(FVector2D InRotationInputs);
    
};

