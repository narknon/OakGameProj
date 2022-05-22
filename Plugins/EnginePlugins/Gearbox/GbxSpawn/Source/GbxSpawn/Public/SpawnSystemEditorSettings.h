#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ESpawnSystemStreamStyle.h"
#include "SpawnSystemEditorSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class USpawnSystemEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    ESpawnSystemStreamStyle StreamStyle;
    
    USpawnSystemEditorSettings();
};

