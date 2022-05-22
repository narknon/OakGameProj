#pragma once
#include "CoreMinimal.h"
#include "InteractiveObject.h"
#include "UObject/NoExportTypes.h"
#include "InstancedDestroyDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "DamageableHISM.generated.h"

UCLASS(Abstract)
class OAKGAME_API ADamageableHISM : public AInteractiveObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBox DamageHitBox;
    
public:
    UPROPERTY(BlueprintAssignable)
    FInstancedDestroyDelegate OnInstancesDestroyed;
    
    ADamageableHISM();
private:
    UFUNCTION(NetMulticast, Reliable)
    void TakeDamageOnInstances(FVector HitLocation, float Radius, FVector Origin);
    
};

