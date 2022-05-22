#pragma once
#include "CoreMinimal.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "GbxAnimNode_ApplyBoneModifyProfile.generated.h"

class UGbxBoneModifyProfile;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxAnimNode_ApplyBoneModifyProfile : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxBoneModifyProfile* Config;
    
    FGbxAnimNode_ApplyBoneModifyProfile();
};

