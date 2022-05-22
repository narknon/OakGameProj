#pragma once
#include "CoreMinimal.h"
#include "EVoiceOfGodSpeaker.h"
#include "WwisePlaybackInstance.h"
#include "EchoInfo.generated.h"

class UPerformanceEchoData;
class UGbxDialogComponent;
class UCharacterEchoData;

USTRUCT(BlueprintType)
struct FEchoInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 DialogPlayingID;
    
    UPROPERTY(Export, Transient)
    UGbxDialogComponent* Caller;
    
    UPROPERTY(Transient)
    UCharacterEchoData* CharacterData;
    
    UPROPERTY(Transient)
    UPerformanceEchoData* PerformanceData;
    
    UPROPERTY(Transient)
    FWwisePlaybackInstance AudioInstance;
    
    UPROPERTY(Transient)
    FString MoodKeyframeToUse;
    
    UPROPERTY(Transient)
    FString VoGMoodKeyToUse;
    
    UPROPERTY(Transient)
    EVoiceOfGodSpeaker VoGSpeakerID;
    
    UPROPERTY()
    bool bForceEchoOnly;
    
    OAKGAME_API FEchoInfo();
};

