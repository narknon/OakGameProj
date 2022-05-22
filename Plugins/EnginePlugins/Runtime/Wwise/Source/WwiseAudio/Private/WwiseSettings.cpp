#include "WwiseSettings.h"

UWwiseSettings::UWwiseSettings() {
    this->pExternalSourcesDebugData = NULL;
    this->WorldPoolSize = 256;
    this->DefaultPlaybackConfiguration = EWwisePlaybackConfiguration::Hifi;
    this->DefaultSpeakerAngles.AddDefaulted(3);
    this->PlaybackConfigurationRtpcName = TEXT("User_PlaybackMode");
    this->MinVolumeForCaptionDB = -20.00f;
    this->MaxMemoryPoolsEditor = 1024;
    this->MaxMemoryPoolsCooked = 256;
    this->StreamManagerPoolSizeMB = 0.25f;
    this->IOMemoryPoolSizeMB = 2.50f;
    this->IODeviceGranularityB = 32768;
    this->bEnableStreamCache = true;
    this->DefaultPoolSizeEditorMB = 64.00f;
    this->DefaultPoolSizeCookedMB = 26.00f;
    this->LowerEngineDefaultPoolSizeMB = 20.00f;
    this->MonitorPoolSizeMB = 0.25f;
    this->MonitorQueuePoolSizeMB = 0.25f;
    this->PrepareEventPoolSizeMB = 16.00f;
    this->PrepareEventPoolSizeEditorMB = 40.00f;
    this->DefaultPoolLowMemoryModeThreshold = 1.00f;
    this->LowerEnginePoolLowMemoryModeThreshold = 0.95f;
    this->bEnableHardwareXMADecoding = true;
    this->APUCachedHeapSizeMB = 190.00f;
    this->APUNoncachedHeapSizeMB = 0.00f;
    this->MaxHardwareAcceleratedXMAVoices = 128;
}

