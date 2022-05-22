#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageTypeParticleProperty.generated.h"

class UGbxDamageType;

USTRUCT(BlueprintType)
struct FDamageTypeParticleProperty {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName PropertyName;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultPropertyValue;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UGbxDamageType>, float> DamageTypeValueAssociations;
    
    OAKGAME_API FDamageTypeParticleProperty();
};

