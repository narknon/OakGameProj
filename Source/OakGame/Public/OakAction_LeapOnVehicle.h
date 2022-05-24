#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxAction_NavHomingJump.h"
#include "ELeapOnVehicle_SeatType.h"
#include "GbxActionRegister.h"
#include "OakAction_LeapOnVehicle.generated.h"

class UGbxAction;
class AOakVehicle;

UCLASS()
class UOakAction_LeapOnVehicle : public UGbxAction_NavHomingJump {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGbxAction> FailedAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DistanceToAttach;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ZOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NavigationToleranceRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxLeapDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDoNavigationTest;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELeapOnVehicle_SeatType SeatType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSearchNearestSeat;
    
public:
    UOakAction_LeapOnVehicle();
    UFUNCTION(BlueprintPure)
    static TArray<FGbxActionRegister> MakeActionLeapOnVehicleRegisters(AOakVehicle* OakVehicle, int32 SeatIndex);
    
};

