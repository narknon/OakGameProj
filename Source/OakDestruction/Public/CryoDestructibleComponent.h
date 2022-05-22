#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDestructibleComponent.h"
#include "Engine/EngineTypes.h"
#include "CryoDestructibleComponent.generated.h"

class UDestructibleComponent;
class UMaterialInterface;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKDESTRUCTION_API UCryoDestructibleComponent : public UGbxDestructibleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* BaseMaterial;
    
    UPROPERTY(EditAnywhere)
    float FracturedLifeSpan;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* FracturedMaterial;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* FracturedInteriorMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    FFractureEffect FractureEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> FracturedActorClass;
    
    UPROPERTY(EditAnywhere)
    float FreezeRateVariation;
    
    UPROPERTY(EditAnywhere)
    float ThawJitterSpeed;
    
    UPROPERTY(EditAnywhere)
    float ThawJitterScale;
    
    UPROPERTY(EditAnywhere)
    FName ThawMaterialParamName;
    
    UPROPERTY(EditAnywhere)
    float DissolveTime;
    
    UPROPERTY(EditAnywhere)
    float DissolveDelayTime;
    
    UPROPERTY(EditAnywhere)
    float DissolvePositionOffsetScale;
    
protected:
    UPROPERTY(Export, Transient)
    UDestructibleComponent* LinkedDestructible;
    
public:
    UCryoDestructibleComponent();
};

