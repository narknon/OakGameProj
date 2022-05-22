#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECoherentRenderingSettingsSeverity.h"
#include "CoherentRenderingSettings.generated.h"

UCLASS(DefaultConfig)
class COHERENTRENDERINGPLUGIN_API UCoherentRenderingSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    ECoherentRenderingSettingsSeverity RenderingLogSeverity;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShowWarningsOnScreen;
    
    UPROPERTY(Config, EditAnywhere)
    FString DeveloperOptions;
    
    UCoherentRenderingSettings();
};

