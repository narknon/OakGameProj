#pragma once
#include "CoreMinimal.h"
#include "GbxFeedbackBase.h"
#include "GbxFeedbackList.generated.h"

class UGbxFeedbackData;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxFeedbackList : public UGbxFeedbackBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UGbxFeedbackData*> FeedbackList;
    
    UGbxFeedbackList();
};

