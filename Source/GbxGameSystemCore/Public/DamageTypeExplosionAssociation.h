#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageTypeExplosionAssociation.generated.h"

class UDamageType;
class UExplosionSizeSelectionData;

USTRUCT(BlueprintType)
struct FDamageTypeExplosionAssociation {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(EditDefaultsOnly)
    UExplosionSizeSelectionData* ExplosionSizeData;
    
    GBXGAMESYSTEMCORE_API FDamageTypeExplosionAssociation();
};

