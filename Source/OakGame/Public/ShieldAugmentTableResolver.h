#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "Engine/DataTable.h"
#include "ShieldAugmentTableResolver.generated.h"

class UGbxAttributeData;

UCLASS(EditInlineNew)
class UShieldAugmentTableResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle TableShieldAug;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AttributeAugTier;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AttributeAugPowerScalar;
    
    UPROPERTY(EditAnywhere)
    bool bCheckPrimary;
    
    UShieldAugmentTableResolver();
};

