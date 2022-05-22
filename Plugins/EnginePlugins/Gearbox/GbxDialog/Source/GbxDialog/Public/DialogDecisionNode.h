#pragma once
#include "CoreMinimal.h"
#include "DialogDecisionNode.generated.h"

USTRUCT(BlueprintType)
struct FDialogDecisionNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Parent;
    
    UPROPERTY(EditAnywhere)
    int32 Decision;
    
    UPROPERTY(EditAnywhere)
    int32 TrueResultChild;
    
    UPROPERTY(EditAnywhere)
    int32 FalseResultChild;
    
    UPROPERTY(EditAnywhere)
    int32 UnrelatedResultChild;
    
    UPROPERTY(EditAnywhere)
    int32 ResultBucket;
    
    UPROPERTY(EditAnywhere)
    int32 MaxChildQuality;
    
    GBXDIALOG_API FDialogDecisionNode();
};

