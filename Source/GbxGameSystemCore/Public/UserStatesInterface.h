#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UserStatesInterface.generated.h"

UINTERFACE(Blueprintable)
class GBXGAMESYSTEMCORE_API UUserStatesInterface : public UInterface {
    GENERATED_BODY()
};

class GBXGAMESYSTEMCORE_API IUserStatesInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool HasEnableConditionsSetForAnyUserState() const PURE_VIRTUAL(HasEnableConditionsSetForAnyUserState, return false;);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintStateHandler(bool bFromLoad);
    
};

