#pragma once
#include "CoreMinimal.h"
#include "PreviewAnimationDescriptor.generated.h"

class USkeletalMesh;
class UAnimationAsset;

USTRUCT(BlueprintType)
struct GBXLEVELEDITORPREVIEW_API FPreviewAnimationDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Title;
    
    UPROPERTY(EditAnywhere)
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(EditAnywhere)
    UAnimationAsset* Animation;
    
    FPreviewAnimationDescriptor();
};

