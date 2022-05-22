#pragma once
#include "CoreMinimal.h"
#include "DamageModifierAttributeCollection.generated.h"

class UGbxAttributeData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FDamageModifierAttributeCollection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* InstigatedModifier;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* ReceivedModifier;
    
public:
    FDamageModifierAttributeCollection();
};

