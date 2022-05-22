#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaAudioSinkProviderInterface -FallbackName=MediaAudioSinkProviderInterface
#include "WwiseMediaAudioSinkProvider.generated.h"

class UWwiseAudioInputEvent;

UCLASS()
class WWISEAUDIO_API UWwiseMediaAudioSinkProvider : public UDataAsset, public IMediaAudioSinkProviderInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseAudioInputEvent* AudioInputPlayEvent;
    
    UPROPERTY(EditAnywhere)
    bool bAutoPlayOnLocalPlayer;
    
    UWwiseMediaAudioSinkProvider();
    
    // Fix for true pure virtual functions not being implemented
};

