#pragma once
#include "CoreMinimal.h"
#include "BoneModifyInfo.h"
#include "GbxDataAsset.h"
#include "BoneModifyState.h"
#include "EGbxBoneModifyProfile_PoseMode.h"
#include "GbxBoneModifyProfile.generated.h"

class UAnimSequence;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxBoneModifyProfile : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimSequence* ReferenceAnimation;
    
    UPROPERTY(EditAnywhere)
    bool bUseTranslation;
    
    UPROPERTY(EditAnywhere)
    bool bUseRotation;
    
    UPROPERTY(EditAnywhere)
    bool bUseScale;
    
    UPROPERTY()
    EGbxBoneModifyProfile_PoseMode PoseMode;
    
    UPROPERTY()
    float AnimationTime;
    
    UPROPERTY()
    TArray<FBoneModifyInfo> Bones;
    
    UPROPERTY(EditAnywhere)
    TArray<FBoneModifyState> BoneModStates;
    
    UGbxBoneModifyProfile();
};

