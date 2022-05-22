#pragma once
#include "CoreMinimal.h"
#include "OakFreezePresentation.generated.h"

class UOakFreezeData;
class UDestructibleComponent;
class UStaticMeshComponent;
class UDecalComponent;

USTRUCT(BlueprintType)
struct FOakFreezePresentation {
    GENERATED_BODY()
public:
    UPROPERTY()
    UOakFreezeData* Data;
    
    UPROPERTY(Export)
    TArray<UDestructibleComponent*> DestructibleComponents;
    
    UPROPERTY(Export)
    TArray<UStaticMeshComponent*> StaticMeshComponents;
    
    UPROPERTY(Export)
    UDecalComponent* GroundDecalComponent;
    
    OAKGAME_API FOakFreezePresentation();
};

