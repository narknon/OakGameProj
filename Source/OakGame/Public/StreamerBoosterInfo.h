#pragma once
#include "CoreMinimal.h"
#include "StreamerBoosterInfo.generated.h"

class UStatusEffectData;
class UTexture;

USTRUCT(BlueprintType)
struct OAKGAME_API FStreamerBoosterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName NameId;
    
    UPROPERTY(EditDefaultsOnly)
    FText DisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UTexture* Icon;
    
    FStreamerBoosterInfo();
};

