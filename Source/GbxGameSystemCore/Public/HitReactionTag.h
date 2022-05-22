#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "HitReactionTag.generated.h"

class UHitReactionTag;
class UCharacterSoundTag;

UCLASS()
class GBXGAMESYSTEMCORE_API UHitReactionTag : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCharacterSoundTag* SoundTag;
    
    UPROPERTY(EditAnywhere)
    UHitReactionTag* CensoredTag;
    
    UHitReactionTag();
};

