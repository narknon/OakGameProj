#pragma once
#include "CoreMinimal.h"
#include "ElementalPuddleTransitionConfigurationData.generated.h"

class UMaterialInterface;
class UPhysicalMaterial;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FElementalPuddleTransitionConfigurationData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* DecalMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* MeshMaterial;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* AudioLoop;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysMatOverride;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> EmitterNames;
    
public:
    OAKGAME_API FElementalPuddleTransitionConfigurationData();
};

