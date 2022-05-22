#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_DefaultFocus.h"
#include "BTService_GameFocus.generated.h"

UCLASS(EditInlineNew)
class GBXAI_API UBTService_GameFocus : public UBTService_DefaultFocus {
    GENERATED_BODY()
public:
    UBTService_GameFocus();
};

