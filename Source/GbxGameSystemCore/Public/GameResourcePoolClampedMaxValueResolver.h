#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolAttributePropertyValueResolver.h"
#include "GameResourcePoolClampedMaxValueResolver.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UGameResourcePoolClampedMaxValueResolver : public UGameResourcePoolAttributePropertyValueResolver {
    GENERATED_BODY()
public:
    UGameResourcePoolClampedMaxValueResolver();
};

