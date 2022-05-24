#pragma once
#include "CoreMinimal.h"
#include "GbxAction.h"
#include "ConditionActionPair.h"
#include "EActionSelectionMethod.h"
#include "GbxAction_ConditionContainer.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_ConditionContainer : public UGbxAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EActionSelectionMethod ActionSelectionMethod;
    
    UPROPERTY(EditAnywhere)
    TArray<FConditionActionPair> ConditionList;
    
    UGbxAction_ConditionContainer();
};

