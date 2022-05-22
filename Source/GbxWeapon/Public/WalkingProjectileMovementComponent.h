#pragma once
#include "CoreMinimal.h"
#include "GbxProjectileMovementComponent.h"
#include "WalkingProjectileMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWalkingProjectileMovementComponent : public UGbxProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGravityAffectsSlopeWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxWalkAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFallOffLedges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxStepUpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementFrozenMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBounceOffWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxWallBounces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WallBounciness;
    
    UPROPERTY()
    bool bOverrideWalkingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WalkingSpeedOverride;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FOnWalkingProjectileHitUnwalkableSurface OnHitUnwalkableSurface;
    
    UPROPERTY(BlueprintAssignable)
    FWalkingProjectileEvent OnBecomeAirborne;
    
    UPROPERTY(BlueprintAssignable)
    FWalkingProjectileEvent OnLanded;
    
public:
    UWalkingProjectileMovementComponent();
};

