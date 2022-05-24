#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Curves/CurveFloat.h"
#include "VehicleOverrideData.h"
#include "WeaponVehicleAnimInstance.generated.h"

class USkeletalMeshComponent;
class AOakWeapon_Vehicle;
class AOakVehicle;

UCLASS(NonTransient)
class OAKGAME_API UWeaponVehicleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDriverWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSeatedWeapon;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasTurretOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DualWeaponDownOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DualWeaponDownElbowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DualWeaponDownArmEndOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DualWeaponTopOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DualWeaponTopElbowOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DualWeaponTopArmEndOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DualWeaponSideOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxIKStretchRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartIKStretchingRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CircleZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CircleDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve DualWeaponRightCurveStartArmExtensionByYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve DualWeaponRightCurveEndArmExtensionByYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve DualWeaponLeftCurveStartArmExtensionByYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve DualWeaponLeftCurveEndArmExtensionByYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StretchWheelBase;
    
    UPROPERTY(EditAnywhere)
    FName LeftWeaponSocketName;
    
    UPROPERTY(EditAnywhere)
    FName RightWeaponSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVehicleOverrideData> OverrideByParts;
    
protected:
    UPROPERTY()
    AOakVehicle* Vehicle;
    
    UPROPERTY()
    AOakWeapon_Vehicle* Weapon_Vehicle;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* LeftWeaponMesh;
    
    UPROPERTY(Export)
    USkeletalMeshComponent* RightWeaponMesh;
    
public:
    UWeaponVehicleAnimInstance();
};

