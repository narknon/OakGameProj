#pragma once
#include "CoreMinimal.h"
#include "AttributePropertyValueResolver.h"
#include "GameResourcePoolAttributePropertyValueResolver.generated.h"

class UGameResourceData;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UGameResourcePoolAttributePropertyValueResolver : public UAttributePropertyValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UGameResourceData* Resource;
    
public:
    UGameResourcePoolAttributePropertyValueResolver();
};

