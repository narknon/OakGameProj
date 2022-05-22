#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AttributeInitializationData.h"
#include "AnimNotifyState_Feedback.generated.h"

class UFeedbackData;

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAnimNotifyState_Feedback : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bApplyToAllPlayers: 1;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* FeedbackData;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData FeedbackScale;
    
public:
    UAnimNotifyState_Feedback();
};

