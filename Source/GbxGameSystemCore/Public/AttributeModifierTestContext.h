#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "AttributeModifierTestContext.generated.h"

UCLASS()
class UAttributeModifierTestContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGbxAttributeFloat AttributeProperty;
    
    UPROPERTY()
    float FloatProperty;
    
    UAttributeModifierTestContext();
};

