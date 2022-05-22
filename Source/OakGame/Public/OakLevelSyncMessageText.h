#pragma once
#include "CoreMinimal.h"
#include "OakLevelSyncMessageText.generated.h"

USTRUCT(BlueprintType)
struct FOakLevelSyncMessageText {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText TitleText;
    
    UPROPERTY(EditAnywhere)
    FText PlayerStateDescriptionText;
    
    UPROPERTY(EditAnywhere)
    FText AnonymousDescriptionText;
    
    UPROPERTY(EditAnywhere)
    float OnScreenDuration;
    
    OAKGAME_API FOakLevelSyncMessageText();
};

