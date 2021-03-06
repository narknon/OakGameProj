#pragma once
#include "CoreMinimal.h"
#include "GbxLevelEditorPreviewDefinition.h"
#include "PreviewAnimationDescriptor.h"
#include "GbxLevelEditorPreviewAnimation.generated.h"

UCLASS(EditInlineNew)
class GBXLEVELEDITORPREVIEW_API UGbxLevelEditorPreviewAnimation : public UGbxLevelEditorPreviewDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPreviewAnimationDescriptor> DescriptorList;
    
    UGbxLevelEditorPreviewAnimation();
};

