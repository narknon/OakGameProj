#pragma once
#include "CoreMinimal.h"
#include "OakVehicleAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "EmperorVehicleAnimInstance.generated.h"

class UMaterialInstanceDynamic;

UCLASS(NonTransient)
class OAKGAME_API UEmperorVehicleAnimInstance : public UOakVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasHeavyWheels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasThreads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* F_L_Threads_MID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* F_R_Threads_MID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* R_L_Threads_MID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInstanceDynamic* R_R_Threads_MID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThreadMaterialAnimDivider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ThreadUVOffsetParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HellFireRecoilOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasGunnerSeatOccupant;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasDriverSeatOccupant;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasLeftTurretOccupant;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasRightTurretOccupant;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasTurretUser;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsDroneDoorOpen;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsDroneOutside;
    
    UEmperorVehicleAnimInstance();
};

