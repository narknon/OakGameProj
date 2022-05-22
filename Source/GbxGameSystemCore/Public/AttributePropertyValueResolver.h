#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParsedProperty -FallbackName=ParsedProperty
#include "AttributePropertyValueResolver.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UAttributePropertyValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool PropertySupportsModifierRemoval;
    
    UPROPERTY(EditDefaultsOnly)
    FParsedProperty Property;
    
public:
    UAttributePropertyValueResolver();
};

