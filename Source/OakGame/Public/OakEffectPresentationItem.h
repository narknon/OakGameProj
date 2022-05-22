#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "WwisePlaybackInstance.h"
#include "OakEffectPresentationItem.generated.h"

class UOakStatusEffectPresentationData;

USTRUCT(BlueprintType)
struct FOakEffectPresentationItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UOakStatusEffectPresentationData* FXData;
    
    UPROPERTY()
    float EffectValue;
    
    UPROPERTY(NotReplicated)
    FWwisePlaybackInstance EffectAudioInstance;
    
public:
    OAKGAME_API FOakEffectPresentationItem();
};

