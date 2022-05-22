#pragma once
#include "CoreMinimal.h"
#include "AttributePropertyValueResolverTestStruct.generated.h"

class UAttributePropertyValueResolverTestContext;

USTRUCT(BlueprintType)
struct FAttributePropertyValueResolverTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    float FloatProp;
    
    UPROPERTY()
    float FloatPropStaticArray[3];
    
    UPROPERTY()
    TArray<float> FloatPropDynamicArray;
    
    UPROPERTY()
    UAttributePropertyValueResolverTestContext* ObjectProp;
    
    UPROPERTY()
    UAttributePropertyValueResolverTestContext* ObjectPropStaticArray[3];
    
    UPROPERTY()
    TArray<UAttributePropertyValueResolverTestContext*> ObjectPropDynamicArray;
    
    GBXGAMESYSTEMCORE_API FAttributePropertyValueResolverTestStruct();
};

