#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NameplateInfoProviderInterface.h"
#include "Agonizer9kCore.generated.h"

class UOakDamageComponent;
class UTargetableComponent;
class USphereComponent;

UCLASS()
class OAKGAME_API AAgonizer9kCore : public AActor, public INameplateInfoProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTargetableComponent* TargetableComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UOakDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USphereComponent* RootSphereComponent;
    
    AAgonizer9kCore();
    
    // Fix for true pure virtual functions not being implemented
};

