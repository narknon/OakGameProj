#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GbxNavAvoidanceInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UGbxNavAvoidanceInterface : public UInterface {
    GENERATED_BODY()
};

class IGbxNavAvoidanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetObstacleAvoidanceLock(bool bDisable, const FName& Reason) PURE_VIRTUAL(SetObstacleAvoidanceLock,);
    
};

