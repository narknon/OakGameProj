#pragma once
#include "CoreMinimal.h"
#include "AchievementUtility.h"
#include "EOakAchievements.h"
#include "OakAchievementUtility.generated.h"

class AGbxPlayerController;

UCLASS(BlueprintType)
class OAKGAME_API UOakAchievementUtility : public UAchievementUtility {
    GENERATED_BODY()
public:
    UOakAchievementUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateAchievementForPlayer(AGbxPlayerController* PC, EOakAchievements AchievementId, int32 ProgressValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnlockAchievementForPlayer(AGbxPlayerController* PC, EOakAchievements AchievementId) const;
    
};

