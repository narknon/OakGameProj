#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "PlaythroughUnlockedData.h"
#include "TutorialLevelUpData.h"
#include "TutorialGlobals.generated.h"

UCLASS()
class OAKGAME_API UTutorialGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FPlaythroughUnlockedData TutorialPlaythroughUnlockedData;
    
    UPROPERTY(EditAnywhere)
    FTutorialLevelUpData TutorialLevelUpData;
    
    UTutorialGlobals();
};

