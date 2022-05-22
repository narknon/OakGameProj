#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GbxMediaData.generated.h"

class UMediaAudioSinkProviderInterface;
class IMediaAudioSinkProviderInterface;
class UMediaTexture;
class UMediaSource;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxMediaData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TScriptInterface<IMediaAudioSinkProviderInterface> AudioSinkProvider;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMediaSource* MediaSource;
    
    UGbxMediaData();
};

