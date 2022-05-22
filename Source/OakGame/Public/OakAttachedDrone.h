#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "GbxParam.h"
#include "Engine/EngineTypes.h"
#include "OakAttachedDrone.generated.h"

class UWwiseAudioComponent;
class UStaticMeshComponent;
class UAnimationAsset;
class UCurveFloat;
class USkeletalMeshComponent;
class USphereComponent;
class UOakDamageComponent;
class UTeamComponent;
class AOakVehicle;
class UAnimInstance;
class UPrimitiveComponent;

UCLASS(Abstract)
class OAKGAME_API AOakAttachedDrone : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(EditAnywhere)
    FName Socket;
    
    UPROPERTY(EditAnywhere)
    FName Slot;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* ExitVehicleBoneAnim;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* EnterVehicleBoneAnim;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* IdleFloatCurve;
    
    UPROPERTY(EditAnywhere)
    float FloatCycleTime;
    
    UPROPERTY(EditAnywhere)
    float FloatHeightDelta;
    
    UPROPERTY(EditAnywhere)
    FGbxParam IdleMovementTime;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* MovementCurve;
    
    UPROPERTY(EditAnywhere)
    float MovementTime;
    
    UPROPERTY(EditAnywhere)
    float MinMovementDistance;
    
    UPROPERTY(EditAnywhere)
    float MaxMovementDistance;
    
    UPROPERTY(EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* OwnerAccelerationEffect;
    
    UPROPERTY(EditAnywhere)
    float DeathTime;
    
    UPROPERTY(EditAnywhere)
    float ExitBlendTime;
    
    UPROPERTY(EditAnywhere)
    float EnterBlendTime;
    
    UPROPERTY(EditAnywhere)
    bool bExplodeOnContact;
    
    UPROPERTY(EditAnywhere)
    FVector EllipseOffset;
    
    UPROPERTY(EditAnywhere)
    FVector EllipseScale;
    
    UPROPERTY(EditAnywhere)
    bool bActiveWhenVehicleHasDriver;
    
    UPROPERTY(EditAnywhere)
    bool bActiveWhenVehicleHasOccupant;
    
    UPROPERTY(EditAnywhere)
    bool bActiveWhenVehicleIsDamaged;
    
    UPROPERTY(EditAnywhere)
    bool bActiveWhenOwnerThreatened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysActive;
    
    UPROPERTY(EditAnywhere)
    bool bDebugDrawEllipse;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWwiseAudioComponent* WwiseAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTeamComponent* TeamComponent;
    
    UPROPERTY(Replicated, Transient)
    FVector LocalOffset;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_WantedLocation)
    FVector WantedLocation;
    
    UPROPERTY(Replicated, Transient)
    bool bIsInCombat;
    
    UPROPERTY(Replicated, Transient)
    bool bIsAtIdleLocation;
    
    UPROPERTY(Replicated, Transient)
    AActor* CurrentTargetActor;
    
    UPROPERTY(Transient)
    AOakVehicle* MyVehicle;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* MyVehicleMesh;
    
    UPROPERTY(Transient)
    UAnimInstance* MyVehicleAnimInstance;
    
public:
    AOakAttachedDrone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void SphereComponent_OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopMoving(AOakVehicle* Vehicle);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartMoving(AOakVehicle* Vehicle);
    
    UFUNCTION()
    void OnRep_WantedLocation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExiting(AOakVehicle* Vehicle);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEntering(AOakVehicle* Vehicle);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDestroyed(AOakVehicle* Vehicle);
    
public:
    UFUNCTION(BlueprintPure)
    UWwiseAudioComponent* GetWwiseAudioComponent() const;
    
};

