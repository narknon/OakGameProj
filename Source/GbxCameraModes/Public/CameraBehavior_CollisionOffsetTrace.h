#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "CameraBehavior_CollisionOffsetTrace.generated.h"

UCLASS(EditInlineNew)
class GBXCAMERAMODES_API UCameraBehavior_CollisionOffsetTrace : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CollisionRadius;
    
    UPROPERTY(EditAnywhere)
    float TraceOffsetZ;
    
    UPROPERTY(EditAnywhere)
    bool bUseAnchorAsStartLocation;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreChildToViewTarget;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreViewTargetAttachParent;
    
    UCameraBehavior_CollisionOffsetTrace();
};

