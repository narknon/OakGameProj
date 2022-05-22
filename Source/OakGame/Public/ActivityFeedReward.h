#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EActivityFeedImageAspectRatio.h"
#include "ActivityFeedReward.generated.h"

class UActivityFeedOpenStoreActionData;
class UActivityFeedURLActionData;
class UActivityFeedStartGameActionData;

UCLASS()
class UActivityFeedReward : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText CaptionString;
    
    UPROPERTY(EditDefaultsOnly)
    FText CondensedCaptionString;
    
    UPROPERTY(EditDefaultsOnly)
    FString SmallImageUrl;
    
    UPROPERTY(EditDefaultsOnly)
    EActivityFeedImageAspectRatio SmallImageAspectRatio;
    
    UPROPERTY(EditDefaultsOnly)
    FString LargeImageUrl;
    
    UPROPERTY(EditDefaultsOnly)
    UActivityFeedURLActionData* URLBrowserActionData;
    
    UPROPERTY(EditDefaultsOnly)
    UActivityFeedOpenStoreActionData* URLStoreActionData;
    
    UPROPERTY(EditDefaultsOnly)
    UActivityFeedStartGameActionData* StartGameActionData;
    
    UActivityFeedReward();
};

