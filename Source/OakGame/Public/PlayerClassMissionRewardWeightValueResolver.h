#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "PlayerClassMissionRewardWeightValueResolver.generated.h"

class UPlayerClassIdentifier;

UCLASS(CollapseCategories, EditInlineNew)
class UPlayerClassMissionRewardWeightValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UPlayerClassIdentifier* PlayerClass;
    
public:
    UPlayerClassMissionRewardWeightValueResolver();
};

