#pragma once
#include "CoreMinimal.h"
#include "AIAction_Priority.h"
#include "GbxBlackboardKeySelector.h"
#include "AIAspectSettings_Navigation.h"
#include "AIAction_MoveNode.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAIAction_MoveNode : public UAIAction_Priority {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector NodeKey;
    
    UPROPERTY(EditAnywhere)
    FAIAspectSettings_Navigation NavSettings;
    
private:
    UPROPERTY()
    uint8 MoveNodeVersion;
    
public:
    UAIAction_MoveNode();
};

