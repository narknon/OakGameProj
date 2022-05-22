#pragma once
#include "CoreMinimal.h"
#include "BoneModifyState_RepData.h"
#include "BoneModifyProfileData.generated.h"

class UGbxBoneModifyProfile;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FBoneModifyProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxBoneModifyProfile* Profile;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneModifyState_RepData> States;
    
    FBoneModifyProfileData();
};

