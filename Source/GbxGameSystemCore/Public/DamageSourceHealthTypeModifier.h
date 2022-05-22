#pragma once
#include "CoreMinimal.h"
#include "DamageSourceHealthTypeModifier.generated.h"

class UHealthTypeData;
class UGbxAttributeData;

USTRUCT(BlueprintType)
struct FDamageSourceHealthTypeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UHealthTypeData* HealthTypeData;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* InstigatedFriendlyFireHealingModifier;
    
    GBXGAMESYSTEMCORE_API FDamageSourceHealthTypeModifier();
};

