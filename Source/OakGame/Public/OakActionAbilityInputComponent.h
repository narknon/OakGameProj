#pragma once
#include "CoreMinimal.h"
#include "GbxInputComponent.h"
#include "OakActionAbilityInputComponent.generated.h"

class UOakActionAbility;

UCLASS(NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakActionAbilityInputComponent : public UGbxInputComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility* OwnerActionAbility;
    
public:
    UOakActionAbilityInputComponent();
};

