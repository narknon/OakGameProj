#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChallengeMinimapIcon.generated.h"

class UGFxMinimapWidget;
class UChallengeLevelActorComponent;

USTRUCT(BlueprintType)
struct FChallengeMinimapIcon {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UChallengeLevelActorComponent* LevelActorComponent;
    
    UPROPERTY(Transient)
    UGFxMinimapWidget* MinimapIconWidget;
    
    UPROPERTY(Transient)
    FGuid MinimapIconGUID;
    
    UPROPERTY(Transient)
    bool bCompleted;
    
    OAKGAME_API FChallengeMinimapIcon();
};

