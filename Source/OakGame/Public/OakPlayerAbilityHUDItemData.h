#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "OakPlayerAbilityHUDItemData.generated.h"

class UWwiseEvent;
class UTexture;

UCLASS()
class OAKGAME_API UOakPlayerAbilityHUDItemData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UTexture* Icon;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StartAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* StopAudioEvent;
    
public:
    UOakPlayerAbilityHUDItemData();
};

