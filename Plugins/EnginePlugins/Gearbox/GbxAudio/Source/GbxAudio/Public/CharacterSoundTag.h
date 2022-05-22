#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "ECharacterSoundType.h"
#include "CharacterSoundTag.generated.h"

UCLASS(Const)
class GBXAUDIO_API UCharacterSoundTag : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECharacterSoundType Type;
    
    UPROPERTY(EditAnywhere)
    float ChanceToPlay;
    
    UPROPERTY(EditAnywhere)
    bool bHighPriorityInterruptingVox;
    
    UPROPERTY(EditAnywhere)
    bool bPainVox;
    
    UPROPERTY(EditAnywhere)
    bool bDeathVox;
    
    UCharacterSoundTag();
};

