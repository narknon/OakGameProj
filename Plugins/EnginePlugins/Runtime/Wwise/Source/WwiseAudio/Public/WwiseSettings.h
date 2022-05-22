#pragma once
#include "CoreMinimal.h"
#include "EWwisePlaybackConfiguration.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "WwiseSettings.generated.h"

class UWwiseExternalSourceDebugData;

UCLASS(DefaultConfig, Config=Game)
class WWISEAUDIO_API UWwiseSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath WwiseWindowsInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath WwiseMacInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath WwiseProjectPath;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FString> WwiseLocalizationEquivalents;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, uint32> LocalizedAudioChunks;
    
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath ExternalSourcesDebugData;
    
    UPROPERTY(Transient)
    UWwiseExternalSourceDebugData* pExternalSourcesDebugData;
    
    UPROPERTY(Config, EditAnywhere)
    int32 WorldPoolSize;
    
    UPROPERTY(Config, EditAnywhere)
    EWwisePlaybackConfiguration DefaultPlaybackConfiguration;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<float> DefaultSpeakerAngles;
    
    UPROPERTY(Config, EditAnywhere)
    FString PlaybackConfigurationRtpcName;
    
    UPROPERTY(Config, EditAnywhere)
    float MinVolumeForCaptionDB;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 MaxMemoryPoolsEditor;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 MaxMemoryPoolsCooked;
    
    UPROPERTY(Config, EditAnywhere)
    float StreamManagerPoolSizeMB;
    
    UPROPERTY(Config, EditAnywhere)
    float IOMemoryPoolSizeMB;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 IODeviceGranularityB;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableStreamCache;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultPoolSizeEditorMB;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultPoolSizeCookedMB;
    
    UPROPERTY(Config, EditAnywhere)
    float LowerEngineDefaultPoolSizeMB;
    
    UPROPERTY(Config, EditAnywhere)
    float MonitorPoolSizeMB;
    
    UPROPERTY(Config, EditAnywhere)
    float MonitorQueuePoolSizeMB;
    
    UPROPERTY(Config, EditAnywhere)
    float PrepareEventPoolSizeMB;
    
    UPROPERTY(Config, EditAnywhere)
    float PrepareEventPoolSizeEditorMB;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultPoolLowMemoryModeThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float LowerEnginePoolLowMemoryModeThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    bool bEnableHardwareXMADecoding;
    
    UPROPERTY(Config, EditAnywhere)
    float APUCachedHeapSizeMB;
    
    UPROPERTY(Config, EditAnywhere)
    float APUNoncachedHeapSizeMB;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 MaxHardwareAcceleratedXMAVoices;
    
    UWwiseSettings();
};

