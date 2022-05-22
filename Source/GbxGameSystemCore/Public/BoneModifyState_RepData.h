#pragma once
#include "CoreMinimal.h"
#include "BoneModifyState_RepData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FBoneModifyState_RepData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bActive;
    
    UPROPERTY(Transient)
    float Alpha;
    
    UPROPERTY(Transient)
    float BlendTime;
    
    FBoneModifyState_RepData();
};

