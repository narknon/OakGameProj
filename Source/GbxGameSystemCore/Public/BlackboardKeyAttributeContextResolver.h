#pragma once
#include "CoreMinimal.h"
#include "AttributeContextResolver.h"
#include "GbxBlackboardKeySelector.h"
#include "BlackboardKeyAttributeContextResolver.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UBlackboardKeyAttributeContextResolver : public UAttributeContextResolver {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector BlackboardKey;
    
    UBlackboardKeyAttributeContextResolver();
};

