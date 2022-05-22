#pragma once
#include "CoreMinimal.h"
#include "PrototypeActor.h"
#include "SpawnPerformance_10SMC.generated.h"

class UStaticMeshComponent;

UCLASS()
class ASpawnPerformance_10SMC : public APrototypeActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent1;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent2;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent3;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent4;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent5;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent6;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent7;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent8;
    
    UPROPERTY(Export)
    UStaticMeshComponent* StaticMeshComponent9;
    
    ASpawnPerformance_10SMC();
};

