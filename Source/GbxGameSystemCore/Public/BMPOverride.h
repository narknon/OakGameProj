#pragma once
#include "CoreMinimal.h"
#include "BMPOverrideBone.h"
#include "EGlobalBoneModifyProfile_PoseMode.h"
#include "BMPOverride.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FBMPOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FBMPOverrideBone> Bones;
    
    UPROPERTY(EditAnywhere)
    EGlobalBoneModifyProfile_PoseMode PoseMode;
    
    FBMPOverride();
};

