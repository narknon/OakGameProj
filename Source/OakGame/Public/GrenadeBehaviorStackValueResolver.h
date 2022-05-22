#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "GrenadeBehaviorStackValueResolver.generated.h"

class UGrenadeBehavior_Payload;

UCLASS(EditInlineNew)
class UGrenadeBehaviorStackValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGrenadeBehavior_Payload> Behavior;
    
    UGrenadeBehaviorStackValueResolver();
};

