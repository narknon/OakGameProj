#pragma once
#include "CoreMinimal.h"
#include "GbxAnimTable.h"
#include "UObject/NoExportTypes.h"
#include "EDynamicToKinematicTransition.h"
#include "MotionMatchedAnimationTable.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UMotionMatchedAnimationTable : public UGbxAnimTable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName RootMotionBone;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> RootMotionBoneUpAxis;
    
    UPROPERTY(EditAnywhere)
    bool bUpAxisIsNegative;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> RootMotionBoneForwardAxis;
    
    UPROPERTY(EditAnywhere)
    bool bForwardAxisIsNegative;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> RootBoneForwardAxis;
    
    UPROPERTY(EditAnywhere)
    bool bRootForwardAxisIsNegative;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> RootBoneUpAxis;
    
    UPROPERTY(EditAnywhere)
    bool bRootUpAxisIsNegative;
    
    UPROPERTY(EditAnywhere)
    float NoMotionSpeed;
    
public:
    UPROPERTY(EditAnywhere)
    bool bUseIdlePoseDriving;
    
    UPROPERTY(EditAnywhere)
    float MinIdleTime;
    
    UPROPERTY(EditAnywhere)
    EDynamicToKinematicTransition DynamicToKinematicTransition;
    
    UPROPERTY(EditAnywhere)
    float BlendToRecoveryTime;
    
    UPROPERTY(EditAnywhere)
    float MaxAllowedDeviation;
    
    UMotionMatchedAnimationTable();
};

