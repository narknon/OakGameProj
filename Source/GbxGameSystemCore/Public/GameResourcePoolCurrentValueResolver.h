#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "GameResourcePoolCurrentValueResolver.generated.h"

class UGameResourceData;

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UGameResourcePoolCurrentValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UGameResourceData* Resource;
    
public:
    UGameResourcePoolCurrentValueResolver();
};

