#pragma once
#include "CoreMinimal.h"
#include "FaceFXDLCPathSettings.generated.h"

USTRUCT(BlueprintType)
struct FACEFX_API FFaceFXDLCPathSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString PatchContentPath;
    
    UPROPERTY(EditAnywhere)
    FString PluginContentPath;
    
    UPROPERTY(EditAnywhere)
    FString ProductionFolderExtension;
    
    UPROPERTY(EditAnywhere)
    FString WwiseFolderExtension;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> AdditionalWwiseFolderExtensions;
    
    FFaceFXDLCPathSettings();
};

