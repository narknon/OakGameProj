#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "AnimNode_WeaponVehicleHandler.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAnimNode_WeaponVehicleHandler : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseYawBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUsePitchBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMinAngleClamp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMaxAngleClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseProjectileBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsDualWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseBoneReTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference SourceBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference DestBone;
    
    FAnimNode_WeaponVehicleHandler();
};

