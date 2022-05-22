#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "Engine/DataTable.h"
#include "GrenadeBehaviorTableResolver.generated.h"

class UGbxAttributeData;

UCLASS(EditInlineNew)
class UGrenadeBehaviorTableResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle TableGrenadeBehavior;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AttributeBehaviorTier;
    
    UPROPERTY(EditAnywhere)
    UGbxAttributeData* AttributeBehaviorPowerScalar;
    
    UPROPERTY(EditAnywhere)
    bool bCheckPrimary;
    
    UGrenadeBehaviorTableResolver();
};

