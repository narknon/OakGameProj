#pragma once
#include "CoreMinimal.h"
#include "ElementalPuddle.h"
#include "ElementalPuddle_LargeLiquidBody.generated.h"

class UProceduralMeshComponent;

UCLASS(NotPlaceable)
class AElementalPuddle_LargeLiquidBody : public AElementalPuddle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UProceduralMeshComponent* PuddleMesh;
    
public:
    AElementalPuddle_LargeLiquidBody();
};

