#pragma once
#include "CoreMinimal.h"
#include "GbxLevelEditorPreviewInstanceData.generated.h"

USTRUCT(BlueprintType)
struct GBXLEVELEDITORPREVIEW_API FGbxLevelEditorPreviewInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Integer0;
    
    UPROPERTY(EditAnywhere)
    bool Bool0;
    
    FGbxLevelEditorPreviewInstanceData();
};

