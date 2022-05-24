#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_EnvQuery.h"
#include "AIAction.h"
#include "AIAspectSettings_Revive.h"
#include "AIAspectSettings_Ticket.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAction_ReviveActor.generated.h"

UCLASS(CollapseCategories, EditInlineNew, NotPlaceable)
class OAKGAME_API UAIAction_ReviveActor : public UAIAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Revive ReviveSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Ticket TicketSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_EnvQuery QuerySettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseQuerySettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_EnvQuery NavigationQuerySettings;
    
    UPROPERTY(EditAnywhere)
    bool bUseNavigationQuery;
    
    UAIAction_ReviveActor();
};

