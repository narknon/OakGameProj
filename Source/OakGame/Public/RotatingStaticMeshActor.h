#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "RotatingStaticMeshActor.generated.h"

class URotatingMovementComponent;

UCLASS()
class OAKGAME_API ARotatingStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    URotatingMovementComponent* RotatingMovement;
    
public:
    ARotatingStaticMeshActor();
};

