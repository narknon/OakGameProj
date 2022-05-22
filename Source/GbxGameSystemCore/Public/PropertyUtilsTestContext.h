#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PropertyUtilsTestStruct.h"
#include "PropertyUtilsTestContext.generated.h"

class UPropertyUtilsTestContext;

UCLASS()
class UPropertyUtilsTestContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    float FloatProp;
    
    UPROPERTY()
    float FloatPropStaticArray[3];
    
    UPROPERTY()
    TArray<float> FloatPropDynamicArray;
    
    UPROPERTY()
    UPropertyUtilsTestContext* ObjectProp;
    
    UPROPERTY()
    UPropertyUtilsTestContext* ObjectPropStaticArray[3];
    
    UPROPERTY()
    TArray<UPropertyUtilsTestContext*> ObjectPropDynamicArray;
    
    UPROPERTY()
    FPropertyUtilsTestStruct StructProp;
    
    UPROPERTY()
    FPropertyUtilsTestStruct StructPropStaticArray[3];
    
    UPROPERTY()
    TArray<FPropertyUtilsTestStruct> StructPropDynamicArray;
    
    UPROPERTY()
    double DoubleProp;
    
    UPROPERTY()
    int8 Int8Prop;
    
    UPROPERTY()
    uint8 UInt8Prop;
    
    UPROPERTY()
    int16 Int16Prop;
    
    UPROPERTY()
    uint16 UInt16Prop;
    
    UPROPERTY()
    int32 Int32Prop;
    
    UPROPERTY()
    uint32 UInt32Prop;
    
    UPROPERTY()
    int64 Int64Prop;
    
    UPROPERTY()
    uint64 UInt64Prop;
    
    UPropertyUtilsTestContext();
};

