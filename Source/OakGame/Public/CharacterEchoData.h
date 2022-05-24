#pragma once
#include "CoreMinimal.h"
#include "CharacterEchoDataBase.h"
#include "ECharacterEchoDataMediaPlaybackType.h"
#include "CharacterEchoData.generated.h"

class UGbxUIName;
class USwfMovie;
class UMediaSource;

UCLASS(EditInlineNew)
class OAKGAME_API UCharacterEchoData : public UCharacterEchoDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxUIName* SpeakerUIName;
    
    UPROPERTY(EditAnywhere)
    USwfMovie* SpeakerMovie;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, UMediaSource*> SpeakerMediaEntries;
    
    UPROPERTY(EditAnywhere)
    ECharacterEchoDataMediaPlaybackType SpeakerMediaPlaybackType;
    
    UCharacterEchoData();
};

