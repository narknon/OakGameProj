#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FoleyImplementerInterface.h"
#include "TrivialFoleyImplementationComponent.generated.h"

class UFoleyMainComponent;
class UImpactData;
class USkeletalMeshComponent;
class UPhysicalMaterial;

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

