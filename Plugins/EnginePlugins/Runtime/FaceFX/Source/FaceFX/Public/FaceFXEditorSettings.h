#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FaceFXDLCPathSettings.h"
#include "FaceFXEditorSettings.generated.h"

UCLASS(DefaultConfig, Config=Editor)
class FACEFX_API UFaceFXEditorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FFaceFXDLCPathSettings> FaceFXDLCSettings;
    
    UFaceFXEditorSettings();
};

