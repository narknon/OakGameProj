#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "EOakLeague.h"
#include "OakLeagueLootChanceScaleAttributeValueResolver.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UOakLeagueLootChanceScaleAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOakLeague> League;
    
public:
    UOakLeagueLootChanceScaleAttributeValueResolver();
};

