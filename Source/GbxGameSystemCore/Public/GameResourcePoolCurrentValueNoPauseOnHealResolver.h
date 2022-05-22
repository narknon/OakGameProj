#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolCurrentValueResolver.h"
#include "GameResourcePoolCurrentValueNoPauseOnHealResolver.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UGameResourcePoolCurrentValueNoPauseOnHealResolver : public UGameResourcePoolCurrentValueResolver {
    GENERATED_BODY()
public:
    UGameResourcePoolCurrentValueNoPauseOnHealResolver();
};

