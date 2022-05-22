#pragma once
#include "CoreMinimal.h"
#include "DialogLookupDecision.h"
#include "DialogDecisionNode.h"
#include "DialogLookupResultBucket.h"
#include "DialogDecisionTree.generated.h"

USTRUCT(BlueprintType)
struct GBXDIALOG_API FDialogDecisionTree {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDialogLookupDecision> Decisions;
    
    UPROPERTY(EditAnywhere)
    TArray<FDialogDecisionNode> Nodes;
    
    UPROPERTY(EditAnywhere)
    TArray<FDialogLookupResultBucket> ResultBuckets;
    
    FDialogDecisionTree();
};

