#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWwiseAudioComponentSpriteSize.h"
#include "UObject/NoExportTypes.h"
#include "WwiseUserSettings.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class WWISEAUDIO_API UWwiseUserSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    EWwiseAudioComponentSpriteSize SpriteSize;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bShowWwiseAudioComponents;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 WwiseDebugFlags;
    
    UPROPERTY(Config, EditAnywhere)
    FColor ActiveComponentColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor HibernatingComponentColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor ComponentHighlightColor;
    
    UPROPERTY(Config, EditAnywhere)
    FColor SelectionHighlightColor;
    
    UPROPERTY(Config, EditAnywhere)
    float SelectionLineThickness;
    
    UPROPERTY(Config, EditAnywhere, Transient)
    bool bDrawAudioThresholdManagerDebug;
    
    UWwiseUserSettings();
};

