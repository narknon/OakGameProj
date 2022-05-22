#pragma once
#include "CoreMinimal.h"
#include "CreditsImageData.h"
#include "CreditsSection.generated.h"

class UCreditsDataAsset;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FCreditsSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<UCreditsDataAsset*> CreditsDataAssets;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCreditsImageData> CreditsImageDataList;
    
    UPROPERTY(EditDefaultsOnly)
    float TransitionTimeBetweenImages;
    
    UPROPERTY(EditDefaultsOnly)
    float HorizontalSpacing;
    
    UPROPERTY(EditDefaultsOnly)
    float UserAnimationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultAnimationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float PauseTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAllowScrollingCredits;
    
    UPROPERTY(EditDefaultsOnly)
    float ScrollingDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayAfterLastCredit;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* BackgroundMusicStartEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* BackgroundMusicEndEvent;
    
    OAKGAME_API FCreditsSection();
};

