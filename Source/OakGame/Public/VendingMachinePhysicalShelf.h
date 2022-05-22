#pragma once
#include "CoreMinimal.h"
#include "VendingMachinePhysicalShelf.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class UParticleSystemComponent;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FVendingMachinePhysicalShelf {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UStaticMeshComponent* ShelfMeshComponent;
    
    UPROPERTY(Export)
    UBoxComponent* ClickCollisionComponent;
    
    UPROPERTY(Export)
    UParticleSystemComponent* ItemScoreParticleComponent;
    
    UPROPERTY(Export)
    UParticleSystemComponent* SoldOutParticleComponent;
    
    UPROPERTY()
    UMaterialInstanceDynamic* MaterialInstance;
    
    OAKGAME_API FVendingMachinePhysicalShelf();
};

