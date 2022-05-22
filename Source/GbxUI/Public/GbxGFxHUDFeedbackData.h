#pragma once
#include "CoreMinimal.h"
#include "GbxHUDFeedbackData.h"
#include "GbxGFxHUDFeedbackData.generated.h"

class UGbxGFxHUDWidget;

UCLASS()
class GBXUI_API UGbxGFxHUDFeedbackData : public UGbxHUDFeedbackData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UGbxGFxHUDWidget>> ValidWidgetTypes;
    
    UGbxGFxHUDFeedbackData();
};

