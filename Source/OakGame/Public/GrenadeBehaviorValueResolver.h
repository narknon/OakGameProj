#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "EInstanceDataOperator.h"
#include "AttributeInitializationData.h"
#include "GrenadeBehaviorValueResolver.generated.h"

class UGrenadeBehavior_Payload;

UCLASS(EditInlineNew)
class UGrenadeBehaviorValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGrenadeBehavior_Payload> Behavior;
    
    UPROPERTY(EditAnywhere)
    EInstanceDataOperator Operator;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ValueB;
    
    UGrenadeBehaviorValueResolver();
};

