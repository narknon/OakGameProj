#pragma once
#include "CoreMinimal.h"
#include "OakWeaponNamedNamingAttribute.generated.h"

class UGbxAttributeData;
class UUIStatFormulaEvaluator;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakWeaponNamedNamingAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttributeName;
    
    UPROPERTY(EditAnywhere)
    bool bUseFormula;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* Attribute;
    
    UPROPERTY(EditAnywhere, Instanced)
    UUIStatFormulaEvaluator* Formula;
    
    FOakWeaponNamedNamingAttribute();
};

