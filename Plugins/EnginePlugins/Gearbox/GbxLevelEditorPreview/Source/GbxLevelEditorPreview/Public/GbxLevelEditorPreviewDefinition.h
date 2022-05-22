#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxLevelEditorPreviewDefinition.generated.h"

UCLASS(Abstract, EditInlineNew)
class GBXLEVELEDITORPREVIEW_API UGbxLevelEditorPreviewDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText PreviewTitle;
    
    UGbxLevelEditorPreviewDefinition();
};

