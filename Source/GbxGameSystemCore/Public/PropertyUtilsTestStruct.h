#pragma once
#include "CoreMinimal.h"
#include "PropertyUtilsTestStruct.generated.h"

class UPropertyUtilsTestContext;

USTRUCT(BlueprintType)
struct FPropertyUtilsTestStruct {
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
    
    GBXGAMESYSTEMCORE_API FPropertyUtilsTestStruct();
};

