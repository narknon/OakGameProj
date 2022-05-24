#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "BoneContainer.h"
#include "BoneBlendParams.h"
#include "EGbxLookAxisOption.h"
#include "Animation/AnimNodeBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=ScreenSizeSelection -FallbackName=ScreenSizeSelection
#include "GbxAnimNode_LookAt.generated.h"

USTRUCT(BlueprintType)
struct GBXANIMRUNTIMEBASE_API FGbxAnimNode_LookAt : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference BoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference ParentBoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EGbxLookAxisOption::Type> ParentLookAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBoneBlendParams> BonesToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBoneBlendParams> EyeBonesToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector HeadLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EyeLookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeadLookPercentage;
    
    UPROPERTY(EditAnywhere)
    bool bEnableDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseEyeMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator EyeShiftMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator EyeShiftMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator EyeGlanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator EyeGlanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeFocusTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeFocusTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeGlanceTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeGlanceTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeShiftTimeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float EyeShiftTimeMax;
    
    UPROPERTY(EditAnywhere)
    int32 EyeLODThreshold;
    
    UPROPERTY(EditAnywhere)
    FScreenSizeSelection EyeScreenSizeThreshold;
    
    UPROPERTY(EditAnywhere)
    bool bUseEyeScreenSizeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink ReferencePoseLink;
    
    FGbxAnimNode_LookAt();
};

