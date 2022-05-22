#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ECohtmlMSAA.h"
#include "ECohtmlSettingsSeverity.h"
#include "SingleFormatFallbacks.h"
#include "ProtocolPathDef.h"
#include "CohtmlSettings.generated.h"

UCLASS(DefaultConfig)
class COHTMLPLUGIN_API UCohtmlSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool EnableLiveReload;
    
    UPROPERTY(Config, EditAnywhere)
    int32 DevToolsPort;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableLocalization;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableBreakIterator;
    
    UPROPERTY(Config, EditAnywhere)
    bool HandleInputOnHTMLBody;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> InputTransparentCssClasses;
    
    UPROPERTY(Config, EditAnywhere)
    float ScrollDelta;
    
    UPROPERTY(Config, EditAnywhere)
    bool ShowWarningsOnScreen;
    
    UPROPERTY(Config, EditAnywhere)
    ECohtmlSettingsSeverity LogSeverity;
    
    UPROPERTY(Config, EditAnywhere)
    bool bRespectTitleSafeZone;
    
    UPROPERTY(Config, EditAnywhere)
    bool bRespectLetterboxing;
    
    UPROPERTY(Config, EditAnywhere)
    bool TickWhileGameIsPaused;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseLowerCaseNamesForAutoExposedProperties;
    
    UPROPERTY(Config)
    ECohtmlMSAA MSAA;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FSingleFormatFallbacks> FallbacksForAllFormats;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseInputPreprocessor;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FProtocolPathDef> ProtocolPathDefs;
    
    UCohtmlSettings();
};

