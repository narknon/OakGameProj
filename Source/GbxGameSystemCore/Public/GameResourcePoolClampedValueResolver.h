#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolAttributePropertyValueResolver.h"
#include "GameResourcePoolClampedValueResolver.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UGameResourcePoolClampedValueResolver : public UGameResourcePoolAttributePropertyValueResolver {
    GENERATED_BODY()
public:
    UGameResourcePoolClampedValueResolver();
};

