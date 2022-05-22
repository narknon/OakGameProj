#pragma once
#include "CoreMinimal.h"
#include "ClothActor.h"
#include "ClothStaticMeshActor.generated.h"

class UStaticMeshComponent;

UCLASS()
class GBXDESTRUCTION_API AClothStaticMeshActor : public AClothActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleDefaultsOnly)
    UStaticMeshComponent* StaticMeshComponent;
    
    AClothStaticMeshActor();
};

