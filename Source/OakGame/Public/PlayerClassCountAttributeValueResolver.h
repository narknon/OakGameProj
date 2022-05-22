#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "PlayerClassCountAttributeValueResolver.generated.h"

class UPlayerClassIdentifier;

UCLASS(CollapseCategories, EditInlineNew)
class UPlayerClassCountAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UPlayerClassIdentifier* PlayerClass;
    
    UPROPERTY(EditAnywhere)
    bool bNormalizeValue;
    
public:
    UPlayerClassCountAttributeValueResolver();
};

