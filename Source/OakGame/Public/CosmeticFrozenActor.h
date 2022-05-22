#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CosmeticFrozenActor.generated.h"

class UDestructibleComponent;

UCLASS()
class ACosmeticFrozenActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UDestructibleComponent* DestructibleComponent;
    
public:
    ACosmeticFrozenActor();
};

