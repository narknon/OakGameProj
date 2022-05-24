#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPhysicalAnimationRootMotionControl.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DynamicPhysicalAnimationComponent.generated.h"

class USkeletalMeshComponent;
class UPrimitiveComponent;
class UPhysicsAsset;
class UPhysicalAnimationProfileAsset;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UDynamicPhysicalAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName PhysicalAnimationCollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    FName KinematicAnimationCollisionProfileName;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ExclusionBones;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SupportBones;
    
private:
    UPROPERTY(Export, Transient)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(Transient)
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(Transient)
    bool bHasPhysicallyAnimatingBones;
    
public:
    UDynamicPhysicalAnimationComponent();
    UFUNCTION(BlueprintCallable)
    void SetStrengthMultiplier(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSkeletalMeshComponent(USkeletalMeshComponent* NewSkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionControl(EPhysicalAnimationRootMotionControl MotionControl);
    
    UFUNCTION(BlueprintCallable)
    void SetHasAnimationPlaying(bool bPlaying);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRagdoll(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePhysicalAnimation(bool bEnable, FName BodyName);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveProfile(const UPhysicalAnimationProfileAsset* Profile);
    
    UFUNCTION()
    void OnRigidBodyOverlap(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    float GetStrengthMultiplier();
    
    UFUNCTION(BlueprintPure)
    EPhysicalAnimationRootMotionControl GetRootMotionControl() const;
    
    UFUNCTION(BlueprintCallable)
    void DetachBodyFromAllExternalRigidBodies(FName BodyName);
    
    UFUNCTION(BlueprintCallable)
    void AttachBodyTo(FName BodyName, UPrimitiveComponent* AttachToComponent, FName AttachToBodyName, float VelocitySpaceBlend, float BreakForce);
    
};

