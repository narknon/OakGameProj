#pragma once
#include "CoreMinimal.h"
#include "OakInventoryBalanceStateComponent.h"
#include "GrenadeModBalanceStateComponent.generated.h"

class UGrenadeDamageTypeAspectData;
class UGrenadeBehavior_Payload;
class UGrenadeDeliveryMethodAspectData;
class UGrenadeOverrideMeshAspectData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGrenadeModBalanceStateComponent : public UOakInventoryBalanceStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGrenadeDamageTypeAspectData* DamageTypeAspect;
    
    UPROPERTY(Transient)
    UGrenadeDeliveryMethodAspectData* DeliveryAspect;
    
    UPROPERTY(Transient)
    TArray<UGrenadeBehavior_Payload*> PayloadAspects;
    
    UPROPERTY(Transient)
    UGrenadeOverrideMeshAspectData* OverrideMesh;
    
public:
    UGrenadeModBalanceStateComponent();
};

