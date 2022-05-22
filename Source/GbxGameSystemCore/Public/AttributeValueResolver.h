#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttributeValueResolver.generated.h"

class UGbxAttributeData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAttributeValueResolver : public UObject {
    GENERATED_BODY()
public:
    UAttributeValueResolver();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool SetValueForAttribute(const UGbxAttributeData* Attribute, const UObject* Context, float Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetValueForAttribute(const UGbxAttributeData* Attribute, const UObject* Context);
    
};

