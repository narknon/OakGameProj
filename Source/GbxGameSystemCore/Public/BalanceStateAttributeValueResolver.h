#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "EBalanceValueType.h"
#include "BalanceStateAttributeValueResolver.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UBalanceStateAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EBalanceValueType ValueToResolve;
    
public:
    UBalanceStateAttributeValueResolver();
};

