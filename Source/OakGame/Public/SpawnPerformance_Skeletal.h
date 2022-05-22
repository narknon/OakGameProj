#pragma once
#include "CoreMinimal.h"
#include "PrototypeActor.h"
#include "SpawnPerformance_Skeletal.generated.h"

class USkeletalMeshComponent;

UCLASS()
class ASpawnPerformance_Skeletal : public APrototypeActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    ASpawnPerformance_Skeletal();
};

