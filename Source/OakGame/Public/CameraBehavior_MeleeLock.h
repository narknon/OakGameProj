#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior_Look.h"
#include "CameraBehavior_MeleeLock.generated.h"

class AActor;

UCLASS(EditInlineNew)
class UCameraBehavior_MeleeLock : public UCameraBehavior_Look {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    AActor* LockedTarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLockDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxHorizontalLockAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVerticalLockAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LockBreakDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LockSpeed;
    
    UCameraBehavior_MeleeLock();
};

