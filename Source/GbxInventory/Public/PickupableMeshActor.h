#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PickupFlyToAbleInterface.h"
#include "PickupableMeshActor.generated.h"

class UGbxActionComponent;

UCLASS()
class GBXINVENTORY_API APickupableMeshActor : public AActor, public IPickupFlyToAbleInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UGbxActionComponent* ActionComponent;
    
public:
    APickupableMeshActor();
    
    // Fix for true pure virtual functions not being implemented
};

