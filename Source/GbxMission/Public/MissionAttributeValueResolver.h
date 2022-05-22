#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "EMissionValueType.h"
#include "MissionAttributeValueResolver.generated.h"

UCLASS(EditInlineNew)
class GBXMISSION_API UMissionAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EMissionValueType ValueToResolve;
    
public:
    UMissionAttributeValueResolver();
};

