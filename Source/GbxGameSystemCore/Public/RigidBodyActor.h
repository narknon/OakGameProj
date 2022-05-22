#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RigidBodyActor.generated.h"

class URigidBodyComponent;

UCLASS()
class GBXGAMESYSTEMCORE_API ARigidBodyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URigidBodyComponent* RigidBodyComponent;
    
    ARigidBodyActor();
};

