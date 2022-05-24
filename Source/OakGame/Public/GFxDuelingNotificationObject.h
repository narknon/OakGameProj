#pragma once
#include "CoreMinimal.h"
#include "GFxDeulingNotificationRewardWin.h"
#include "GbxGFxObject.h"
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

