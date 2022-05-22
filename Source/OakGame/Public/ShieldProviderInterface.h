#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShieldProviderInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UShieldProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IShieldProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool HasShieldEquipped() PURE_VIRTUAL(HasShieldEquipped, return false;);
    
};

