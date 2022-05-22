#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityResourceController.generated.h"

class UGbxAbility;

USTRUCT()
struct GBXABILITIES_API FGbxAbilityResourceController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxAbility* Owner;
    
public:
    FGbxAbilityResourceController();
};

