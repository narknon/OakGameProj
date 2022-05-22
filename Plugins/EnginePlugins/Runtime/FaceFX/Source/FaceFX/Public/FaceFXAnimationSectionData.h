#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FaceFXAnimId.h"
#include "FaceFXSkelMeshComponentId.h"
#include "UObject/NoExportTypes.h"
#include "FaceFXAnimationSectionData.generated.h"

class UFaceFXAnim;

USTRUCT(BlueprintType)
struct FFaceFXAnimationSectionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid TrackId;
    
    UPROPERTY()
    int32 RowIndex;
    
    UPROPERTY()
    FFaceFXAnimId AnimationId;
    
    UPROPERTY()
    TSoftObjectPtr<UFaceFXAnim> Animation;
    
    UPROPERTY()
    FFaceFXSkelMeshComponentId ComponentId;
    
    UPROPERTY()
    float AnimDuration;
    
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float EndOffset;
    
    UPROPERTY()
    FFrameNumber StartTime;
    
    UPROPERTY()
    FFrameNumber EndTime;
    
    UPROPERTY(Transient)
    bool bCachedAnimDuration;
    
    FACEFX_API FFaceFXAnimationSectionData();
};

