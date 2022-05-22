#pragma once
#include "CoreMinimal.h"
#include "ElementalPuddle.h"
#include "ElementalPuddle_Mesh.generated.h"

class UStaticMeshComponent;

UCLASS()
class AElementalPuddle_Mesh : public AElementalPuddle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UStaticMeshComponent* PuddleMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bSquarePuddle: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bMaskEdges: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bOverrideDepthFade: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DepthFade;
    
public:
    AElementalPuddle_Mesh();
};

