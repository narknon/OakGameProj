#pragma once
#include "CoreMinimal.h"
#include "GbxFlagValueResolver.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParsedProperty -FallbackName=ParsedProperty
#include "GbxFlagValueResolver_Property.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxFlagValueResolver_Property : public UGbxFlagValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FParsedProperty Property;
    
public:
    UGbxFlagValueResolver_Property();
};

