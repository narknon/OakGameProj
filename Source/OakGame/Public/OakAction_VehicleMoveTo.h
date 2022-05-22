#pragma once
#include "CoreMinimal.h"
#include "GbxAction.h"
#include "OakAction_VehicleMoveTo.generated.h"

UCLASS()
class UOakAction_VehicleMoveTo : public UGbxAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ReachRadius;
    
    UPROPERTY(EditAnywhere)
    float WantedSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    bool bUseBoost;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    float DotDestination;
    
    UOakAction_VehicleMoveTo();
};

