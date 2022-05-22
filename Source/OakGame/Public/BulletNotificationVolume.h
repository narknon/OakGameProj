#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "OakThroughCollisionHandlerInterface.h"
#include "BulletNotificationDelegate.h"
#include "BulletNotificationVolume.generated.h"

UCLASS()
class OAKGAME_API ABulletNotificationVolume : public AVolume, public IOakThroughCollisionHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBulletNotification OnBulletThrough;
    
    ABulletNotificationVolume();
    
    // Fix for true pure virtual functions not being implemented
};

