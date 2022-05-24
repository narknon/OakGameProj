#pragma once
#include "CoreMinimal.h"
#include "EGbxBoneModifyProfile_PoseMode.h"
#include "BoneModifyInfo.h"
#include "AlphaBlend.h"
#include "BoneModifyState.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FBoneModifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName Name;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    EGbxBoneModifyProfile_PoseMode PoseMode;
    
    UPROPERTY(EditDefaultsOnly)
    bool bStartActive;
    
    UPROPERTY(EditDefaultsOnly)
    FAlphaBlend Blend;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FBoneModifyInfo> Bones;
    
    FBoneModifyState();
};

