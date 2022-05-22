#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "ENativeEnemyExperienceType.h"
#include "EnemyExperienceMultiplierAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UEnemyExperienceMultiplierAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<ENativeEnemyExperienceType, float> ExperienceTypeToMultiplierMap;
    
    UPROPERTY(EditAnywhere)
    float DefaultMultiplier;
    
public:
    UEnemyExperienceMultiplierAttributeValueResolver();
};

