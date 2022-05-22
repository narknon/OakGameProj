#pragma once
#include "CoreMinimal.h"
#include "OakTriggerBox.h"
#include "OakVehicleSpeedTriggerBox.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS()
class OAKGAME_API AOakVehicleSpeedTriggerBox : public AOakTriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WantedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WantedSteering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bForceReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseHandbrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    AOakVehicleSpeedTriggerBox();
    UFUNCTION()
    void VehicleTouched(AActor* OtherActor, bool bIsPlayer, UPrimitiveComponent* OptionalTouchedComponent);
    
};

