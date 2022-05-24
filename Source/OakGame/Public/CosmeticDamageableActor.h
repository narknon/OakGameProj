#pragma once
#include "CoreMinimal.h"
#include "CosmeticDamageEventDetails.h"
#include "GameFramework/Actor.h"
#include "DamageableInterface.h"
#include "CosmeticDamageableActor.generated.h"

UCLASS()
class ACosmeticDamageableActor : public AActor, public IDamageableInterface {
    GENERATED_BODY()
public:
    ACosmeticDamageableActor();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTakeDamage(const FCosmeticDamageEventDetails& Details);
    
    
    // Fix for true pure virtual functions not being implemented
};

