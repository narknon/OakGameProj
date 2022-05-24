#pragma once
#include "CoreMinimal.h"
#include "AIAspect.h"
#include "AIAspectSettings_Ticket.h"
#include "AIAspect_Ticket.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAspect_Ticket : public UAIAspect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Ticket Settings;
    
    UAIAspect_Ticket();
};

