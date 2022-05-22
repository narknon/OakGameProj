#pragma once
#include "CoreMinimal.h"
#include "ClothActor.h"
#include "ClothSkeletalMeshActor.generated.h"

class USkeletalMeshComponent;

UCLASS()
class GBXDESTRUCTION_API AClothSkeletalMeshActor : public AClothActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    AClothSkeletalMeshActor();
};

