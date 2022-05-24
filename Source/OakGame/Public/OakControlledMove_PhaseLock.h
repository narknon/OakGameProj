#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "AttributeInitializationData.h"
#include "OakControlledMove.h"
#include "OakActionAbilityOwnedResourceInterface.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OakControlledMove_PhaseLock.generated.h"

class UOakActionAbility;

UCLASS()
class UOakControlledMove_PhaseLock : public UOakControlledMove, public IOakActionAbilityOwnedResourceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData HeightFromGround;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve LiftLocationCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve PhaseLockTargetBoundsToParticleScaleCurve;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag PhaseLockLiftImmunityTag;
    
    UPROPERTY(EditDefaultsOnly)
    float BobStartDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float LiftBobFrequency;
    
    UPROPERTY(EditDefaultsOnly)
    float LiftBobAmplitude;
    
    UPROPERTY(EditDefaultsOnly)
    float LiftLocationCollisionEnableTolerance;
    
    UPROPERTY(EditDefaultsOnly)
    FName FXSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRegisterWithActionAbility;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOakActionAbility> OwnerActionAbilityClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBlocksActionAbilityShutdown;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility* OwnerActionAbility;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    float TargetParticleScale;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    FVector LiftStartLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    FVector LiftEndLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    FVector LiftEndFXSocketLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds TargetFXBounds;
    
public:
    UOakControlledMove_PhaseLock();
protected:
    UFUNCTION(BlueprintPure)
    FVector GetSuperSkunkworksReplicationData() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

