#pragma once
#include "CoreMinimal.h"
#include "GFxDisplayedNotificationWidget.h"
#include "GFxCrewChallengeCompletedNotificationWidget.generated.h"

class UGbxTextField;

UCLASS()
class UGFxCrewChallengeCompletedNotificationWidget : public UGFxDisplayedNotificationWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UGbxTextField* CrewChallengeCompletedText;
    
    UPROPERTY()
    UGbxTextField* CrewChallengeCompletedTextShadow;
    
    UPROPERTY()
    UGbxTextField* CrewChallengeTitleText;
    
public:
    UGFxCrewChallengeCompletedNotificationWidget();
};

