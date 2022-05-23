#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxDeulingNotificationRewardWin.h"
#include "GFxDuelingNotificationObject.generated.h"

UCLASS(NonTransient)
class UGFxDuelingNotificationObject : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FGFxDeulingNotificationRewardWin RewardWin;
    
public:
    UGFxDuelingNotificationObject();
};

