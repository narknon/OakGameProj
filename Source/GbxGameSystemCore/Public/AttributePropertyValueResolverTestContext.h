#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttributePropertyValueResolverTestStruct.h"
#include "AttributePropertyValueResolverTestContext.generated.h"

class UAttributePropertyValueResolverTestContext;

UCLASS()
class UAttributePropertyValueResolverTestContext : public UObject {
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
    
    UPROPERTY()
    FAttributePropertyValueResolverTestStruct StructProp;
    
    UPROPERTY()
    FAttributePropertyValueResolverTestStruct StructPropStaticArray[3];
    
    UPROPERTY()
    TArray<FAttributePropertyValueResolverTestStruct> StructPropDynamicArray;
    
    UAttributePropertyValueResolverTestContext();
};

