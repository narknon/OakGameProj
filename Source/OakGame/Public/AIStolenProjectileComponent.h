#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "StolenProjectileEventDelegate.h"
#include "GbxBlackboardKeySelector.h"
#include "ReplicatedStolenProjectileData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EOakElementalType.h"
#include "AIStolenProjectileComponent.generated.h"

class UBlackboardComponent;
class AActor;
class UCurveFloat;
class USkeletalMeshComponent;
class UTargetingComponent;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UAIStolenProjectileComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStolenProjectileEvent OnStolenProjectileUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FStolenProjectileEvent OnStolenProjectileReturned;
    
    UPROPERTY(BlueprintAssignable)
    FStolenProjectileEvent OnStolenProjectileDestroyed;
    
private:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector BlackboardKeyProjectile;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector BlackboardKeyHasProjectile;
    
    UPROPERTY(EditAnywhere)
    float DirectionConeHalfAngle;
    
    UPROPERTY(EditAnywhere)
    bool bLimitedByDirection;
    
    UPROPERTY(EditAnywhere)
    float ChanceToSucceed;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* LerpToSocketCurve;
    
    UPROPERTY(EditAnywhere)
    bool bCanStealWhenLeftComponent;
    
    UPROPERTY(EditAnywhere)
    float TimeToForget;
    
    UPROPERTY(Transient)
    AActor* StolenProjectile;
    
    UPROPERTY(Transient)
    TArray<AActor*> IgnoreProjectiles;
    
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* SkelMeshComp;
    
    UPROPERTY(Export, Transient)
    UTargetingComponent* TargetingComponent;
    
    UPROPERTY(Export, Transient)
    UBlackboardComponent* BlackboardComponent;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ClientData)
    FReplicatedStolenProjectileData ClientData;
    
public:
    UAIStolenProjectileComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void StolenProjectileReleased();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetChanceToSucceed(float NewChanceToSucceed);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnProjectileToTarget(float Speed, float AnglePercent, FName Socket, FVector TargetOffset, FRotator AngleOffset, float MaxPrediction);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnProjectileToOwner(float Speed, float AnglePercent, FName Socket, FVector TargetOffset, FRotator AngleOffset, float MaxPrediction);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnProjectileToLocation(FVector Location, float Speed, float AnglePercent);
    
    UFUNCTION(BlueprintCallable)
    bool ReturnProjectileToActor(AActor* Actor, float Speed, float AnglePercent, FName Socket, FVector TargetOffset, FRotator AngleOffset, float MaxPrediction);
    
private:
    UFUNCTION()
    void ReleaseOnStolenProjectileDestroyed(AActor* unused);
    
    UFUNCTION()
    void OnRep_ClientData();
    
    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    bool LerpToSocket(FName Socket, float Duration);
    
    UFUNCTION(BlueprintPure)
    EOakElementalType GetElementalType() const;
    
    UFUNCTION(BlueprintCallable)
    bool DisarmProjectile();
    
    UFUNCTION(BlueprintPure)
    bool DidInteractionSucceed() const;
    
    UFUNCTION(BlueprintCallable)
    bool DetonateProjectile();
    
    UFUNCTION(BlueprintCallable)
    bool DestroyProjectile();
    
    UFUNCTION(BlueprintCallable)
    bool AttachProjectile(FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    bool ArmProjectile();
    
};

