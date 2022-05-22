#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "GbxLevelEditorPreviewSettings.generated.h"

UCLASS(Config=Editor)
class GBXLEVELEDITORPREVIEW_API UGbxLevelEditorPreviewSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool AllowLevelEditorPreviewComponent;
    
    UGbxLevelEditorPreviewSettings();
};

