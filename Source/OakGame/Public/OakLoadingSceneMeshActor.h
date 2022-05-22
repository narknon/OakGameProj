#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OakLoadingSceneMeshActor.generated.h"

class UStaticMeshComponent;

UCLASS()
class OAKGAME_API AOakLoadingSceneMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent;
    
    AOakLoadingSceneMeshActor();
};

