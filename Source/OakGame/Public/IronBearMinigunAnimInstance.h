#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IronBearMinigunAnimInstance.generated.h"

class AOakWeapon_IronBearHardPoint;

UCLASS(NonTransient)
class OAKGAME_API UIronBearMinigunAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FRotator UpperBarrelRotation;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FRotator LowerBarrelRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DefaultSpinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Mod3SpinRate;
    
private:
    UPROPERTY(Transient)
    AOakWeapon_IronBearHardPoint* MinigunHardpoint;
    
public:
    UIronBearMinigunAnimInstance();
};

