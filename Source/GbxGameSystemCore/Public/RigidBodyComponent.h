#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "ImpactDataOverride.h"
#include "RigidBodyComponentImpulseAddedDelegate.h"
#include "RigidBodyComponent.generated.h"

class UImpactData;
class UPrimitiveComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API URigidBodyComponent : public UStaticMeshComponent, public IImpactDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UImpactData* RigidBodyImpactData;
    
    UPROPERTY(BlueprintAssignable)
    FRigidBodyComponentImpulseAdded OnImpulseAdded;
    
    UPROPERTY(EditAnywhere)
    bool bEnableHardSleeping;
    
    URigidBodyComponent();
    UFUNCTION()
    void SetKinematic(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    
    // Fix for true pure virtual functions not being implemented
};

