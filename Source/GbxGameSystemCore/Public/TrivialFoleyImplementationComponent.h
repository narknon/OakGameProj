#pragma once
#include "CoreMinimal.h"
#include "FoleyImplementerInterface.h"
#include "Components/ActorComponent.h"
#include "TrivialFoleyImplementationComponent.generated.h"

class UPhysicalMaterial;
class UImpactData;
class USkeletalMeshComponent;
class UFoleyMainComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UTrivialFoleyImplementationComponent : public UActorComponent, public IFoleyImplementerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UImpactData* FootstepImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhysicalMaterial* FootstepPhysmat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USkeletalMeshComponent* BodySkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> FootSockets;
    
    UPROPERTY(Export, Transient)
    UFoleyMainComponent* CachedFoleyMainComponent;
    
    UTrivialFoleyImplementationComponent();
    
    // Fix for true pure virtual functions not being implemented
};

