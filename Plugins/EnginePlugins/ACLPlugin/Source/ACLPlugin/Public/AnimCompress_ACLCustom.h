#pragma once
#include "CoreMinimal.h"
#include "AnimCompress_ACLBase.h"
#include "ACLVectorFormat.h"
#include "ACLRotationFormat.h"
#include "AnimCompress_ACLCustom.generated.h"

UCLASS(EditInlineNew, MinimalAPI)
class UAnimCompress_ACLCustom : public UAnimCompress_ACLBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DefaultVirtualVertexDistance;
    
    UPROPERTY(EditAnywhere)
    float SafeVirtualVertexDistance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ACLRotationFormat> RotationFormat;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ACLVectorFormat> TranslationFormat;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ACLVectorFormat> ScaleFormat;
    
    UPROPERTY(EditAnywhere)
    float ErrorThreshold;
    
    UPROPERTY(EditAnywhere)
    float ConstantRotationThresholdAngle;
    
    UPROPERTY(EditAnywhere)
    float ConstantTranslationThreshold;
    
    UPROPERTY(EditAnywhere)
    float ConstantScaleThreshold;
    
    UPROPERTY(EditAnywhere)
    uint8 bClipRangeReduceRotations: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bClipRangeReduceTranslations: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bClipRangeReduceScales: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableSegmenting: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSegmentRangeReduceRotations: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSegmentRangeReduceTranslations: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSegmentRangeReduceScales: 1;
    
    UPROPERTY(EditAnywhere)
    uint16 IdealNumKeyFramesPerSegment;
    
    UPROPERTY(EditAnywhere)
    uint16 MaxNumKeyFramesPerSegment;
    
    UAnimCompress_ACLCustom();
};

