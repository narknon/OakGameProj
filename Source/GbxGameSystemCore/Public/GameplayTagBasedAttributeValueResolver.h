#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "GameplayTagToValueMap.h"
#include "AttributeInitializationData.h"
#include "GameplayTagBasedAttributeValueResolver.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGameplayTagBasedAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGameplayTagToValueMap> TagToValueMap;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ValueIfNoTagIsFound;
    
public:
    UGameplayTagBasedAttributeValueResolver();
};

