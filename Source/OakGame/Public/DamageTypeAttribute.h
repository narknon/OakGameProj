#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageTypeAttribute.generated.h"

class UGbxAttributeData;
class UGbxDamageType;

USTRUCT(BlueprintType)
struct FDamageTypeAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* AttributeToModify;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
    OAKGAME_API FDamageTypeAttribute();
};

