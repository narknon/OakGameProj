#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_RunEQS.h"
#include "BTService_GbxRunEQS.generated.h"

UCLASS(EditInlineNew)
class GBXAI_API UBTService_GbxRunEQS : public UBTService_RunEQS {
    GENERATED_BODY()
public:
    UBTService_GbxRunEQS();
};

