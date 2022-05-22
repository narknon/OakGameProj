#pragma once
#include "CoreMinimal.h"
#include "ElementalPuddle.h"
#include "ElementalPuddle_Decal.generated.h"

class UDecalComponent;

UCLASS()
class AElementalPuddle_Decal : public AElementalPuddle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UDecalComponent* PuddleDecal;
    
public:
    AElementalPuddle_Decal();
};

