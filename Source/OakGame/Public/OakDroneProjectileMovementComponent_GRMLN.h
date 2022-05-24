#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "OakDroneProjectileMovementComponent.h"
#include "DroneMovementComponentBoostSignatureDelegate.h"
#include "GRMLNHoverProfile.h"
#include "OakDroneProjectileMovementComponent_GRMLN.generated.h"

class AOakDroneProjectile_GRMLN;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakDroneProjectileMovementComponent_GRMLN : public UOakDroneProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDroneMovementComponentBoostSignature OnBoostStateChanged;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGRMLNHoverProfile> HoverProfiles;
    
    UPROPERTY(EditDefaultsOnly)
    float BoostVelocitySquared;
    
    UPROPERTY(EditDefaultsOnly)
    float HardpointActivationRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float HardpointDeactivationRadius;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData DroneDeliveryCooldownData;
    
    UPROPERTY(Transient)
    AOakDroneProjectile_GRMLN* GRMLNOwner;
    
public:
    UOakDroneProjectileMovementComponent_GRMLN();
};

