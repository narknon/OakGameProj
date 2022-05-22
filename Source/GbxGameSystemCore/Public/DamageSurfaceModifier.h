#pragma once
#include "CoreMinimal.h"
#include "EDamageSurfaceType.h"
#include "AttributeInitializationData.h"
#include "DamageSurfaceModifier.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FDamageSurfaceModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDamageSurfaceType PhysicalSurface;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Modifier;
    
    FDamageSurfaceModifier();
};

