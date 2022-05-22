#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PhysicsVolume.h"
#include "GravityOverrideVolume.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API AGravityOverrideVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float GravityZ;
    
    UPROPERTY(EditAnywhere)
    bool bEnableTeamGravity;
    
    UPROPERTY(EditAnywhere)
    int32 OverrideTeamGravity;
    
    AGravityOverrideVolume();
};

