#pragma once
#include "CoreMinimal.h"
#include "OakProfileMenuTutorialInfo.generated.h"

USTRUCT(BlueprintType)
struct FOakProfileMenuTutorialInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> SeenTutorials;
    
    UPROPERTY()
    bool bTutorialsDisabled;
    
    UPROPERTY()
    bool bTutorialsAllowedInNonGameModes;
    
    UPROPERTY()
    bool bHasSeenFastTravelPrompt;
    
    OAKGAME_API FOakProfileMenuTutorialInfo();
};

