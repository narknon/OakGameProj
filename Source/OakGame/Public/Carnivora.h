#pragma once
#include "CoreMinimal.h"
#include "SplineTriggers.h"
#include "GameFramework/Pawn.h"
#include "CarnivoraFakeTurrets.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Carnivora.generated.h"

class UGbxSkeletalMeshComponent;
class USplineFollowerComponent;
class UStaticMeshComponent;
class ACarnivoraTrackBuilder;
class ACarnivoraTread;
class UPrimitiveComponent;
class AActor;

UCLASS()
class OAKGAME_API ACarnivora : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ACarnivoraTrackBuilder* TrackBuilder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LineTracesToExecutePerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAheadDirectionPrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WheelMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngleMultiplierWheel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DirectionPredictionWheelAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float DesiredHeightAboveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DesiredAdditionalRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DesiredAdditionalPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDrawDebugPlaneTilt;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> PartLocation;
    
    UPROPERTY(EditAnywhere)
    float DefaultSocketToGroundDistanceTireTrack;
    
    UPROPERTY(EditAnywhere)
    float DefaultSocketToGroundDistanceFrontWheel;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* SMFrame;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGbxSkeletalMeshComponent* SKTireTrack;
    
    UPROPERTY(Transient)
    ACarnivoraTread* LeftTread;
    
    UPROPERTY(Transient)
    ACarnivoraTread* RightTread;
    
    UPROPERTY(EditAnywhere)
    FName FrontRight_SocketNameDistToGround;
    
    UPROPERTY(EditAnywhere)
    FName FrontLeft_SocketNameDistToGround;
    
    UPROPERTY(EditAnywhere)
    FName BackRight_SocketNameDistToGround;
    
    UPROPERTY(EditAnywhere)
    FName BackLeft_SocketNameDistToGround;
    
    UPROPERTY(EditAnywhere)
    float LeftWheelDotRatioCollision;
    
    UPROPERTY(EditAnywhere)
    float RightWheelDotRatioCollision;
    
    UPROPERTY(EditAnywhere)
    float FrontWheelDotRatioCollision;
    
    UPROPERTY(EditAnywhere)
    bool bMustMoveToDoDamage;
    
    UPROPERTY(EditAnywhere)
    bool bDrawDebugCollisionTreadsAndWheels;
    
    UPROPERTY(EditAnywhere)
    bool bDoDamageOnTreadAndWheelCollision;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCarnivoraFakeTurrets> FakeCarnivoraTurrets;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShootLightProjectileAtPlayers;
    
    UPROPERTY(EditDefaultsOnly)
    float SquaredDistanceReplicationCorrectionTreshold;
    
    UPROPERTY(Replicated, Transient)
    bool bShouldUpdateCarnivoraTiltBasedOnGround;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_InitialcarnivoraLocation)
    FVector InitialCarnivoraLocation;
    
private:
    UPROPERTY(EditInstanceOnly)
    TArray<FSplineTriggers> SplineTriggers;
    
    UPROPERTY(EditInstanceOnly)
    int32 CurrentCarnivoraSplineId;
    
    UPROPERTY(Export, Transient)
    USplineFollowerComponent* SplineFollower;
    
public:
    ACarnivora();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartCarnivoraMovement(int32 SplineTriggersId);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackBuilder(ACarnivoraTrackBuilder* NewTrack, bool bReverse);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldUpdateTitlBasedOnGround(bool bShouldUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldUpdateTiltBasedOnGround(bool bShouldUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldShootAtPlayers(bool bShootAtPlayers);
    
    UFUNCTION(BlueprintCallable)
    void SetCarnivoraTickEnabled(bool bEnabled);
    
    UFUNCTION()
    void OnRep_InitialcarnivoraLocation();
    
private:
    UFUNCTION()
    void OnComponentHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION()
    void NotifyTriggerTouched(AActor* OtherActor, bool bIsPlayer);
    
};

