#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "NumericRange.h"
#include "UObject/NoExportTypes.h"
#include "EGbxLookAxisOption.h"
#include "BoneBlendParams.generated.h"

USTRUCT(BlueprintType)
struct GBXANIMRUNTIMEBASE_API FBoneBlendParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneReference Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PitchWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FNumericRange YawClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FNumericRange PitchClamp;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(EditAnywhere)
    bool bUseRotationOffset;
    
    UPROPERTY()
    float LookAtClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EGbxLookAxisOption::Type> LookAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EGbxLookAxisOption::Type> UpAxis;
    
    FBoneBlendParams();
};

