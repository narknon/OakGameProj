#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IronBearBubbleShieldAnimInstance.generated.h"

class AOakWeapon_IronBearHardPoint;

UCLASS(NonTransient)
class OAKGAME_API UIronBearBubbleShieldAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FRotator FanRotator;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 BlendPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector RotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpinDownRateMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpinUpRateMultiplier;
    
private:
    UPROPERTY(Transient)
    AOakWeapon_IronBearHardPoint* RailgunHardpoint;
    
    UPROPERTY(Transient)
    bool bCanBeginSpinning;
    
    UPROPERTY(Transient)
    float NewRotationRate;
    
public:
    UIronBearBubbleShieldAnimInstance();
protected:
    UFUNCTION()
    void OnRailgunStartFiring();
    
    UFUNCTION()
    void OnRailgunFired_Default();
    
    UFUNCTION()
    void OnRailgunFinishFiring();
    
};

