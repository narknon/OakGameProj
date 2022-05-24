#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGbxParamValueMode.h"
#include "EGbxParamValueType.h"
#include "NumericRange.h"
#include "AttributeInitializationData.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.generated.h"

class AActor;
class UAttributeInitializer;
class UGbxAttributeData;
class UGbxCondition;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGbxParamValueType ValueType;
    
    UPROPERTY(EditAnywhere)
    uint8 DisabledValueModes;
    
    UPROPERTY(EditAnywhere)
    uint8 ValueFlags;
    
    UPROPERTY(EditAnywhere)
    EGbxParamValueMode ValueMode;
    
    UPROPERTY(EditAnywhere)
    FNumericRange Range;
    
private:
    UPROPERTY()
    TSubclassOf<UAttributeInitializer> AttributeInitializer;
    
    UPROPERTY()
    UGbxAttributeData* AttributeData;
    
public:
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AttributeInitializationData;
    
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector BlackboardKey;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> Actor;
    
    FGbxParam();
};

