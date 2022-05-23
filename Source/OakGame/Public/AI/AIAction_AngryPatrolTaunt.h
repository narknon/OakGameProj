#pragma once
#include "CoreMinimal.h"
#include "AIAction_Selector.h"
#include "GbxParam.h"
#include "AIAspectSettings_GbxAction.h"
#include "AIAction_AngryPatrolTaunt.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class OAKGAME_API UAIAction_AngryPatrolTaunt : public UAIAction_Selector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGbxParam ProbabilityOfPlayingTauntAction;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_GbxAction TauntAction;
    
public:
    UAIAction_AngryPatrolTaunt();
};

