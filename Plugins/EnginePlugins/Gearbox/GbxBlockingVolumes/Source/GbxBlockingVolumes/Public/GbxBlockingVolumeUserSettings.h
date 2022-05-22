#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxBlockingVolumeUserSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class GBXBLOCKINGVOLUMES_API UGbxBlockingVolumeUserSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bAlwaysRenderVolumes;
    
    UPROPERTY(Config, EditAnywhere)
    bool bNeverRenderVolumes;
    
    UPROPERTY(Config, EditAnywhere)
    float BlockingVolumeOpacity;
    
    UPROPERTY(Config, EditAnywhere)
    bool bInvertColors;
    
    UGbxBlockingVolumeUserSettings();
};

