#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AttributeInitializationData.h"
#include "AnimNotify_Feedback.generated.h"

class UFeedbackData;

UCLASS(CollapseCategories)
class GBXGAMESYSTEMCORE_API UAnimNotify_Feedback : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bApplyToAllPlayers: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreOwner: 1;
    
    UPROPERTY(EditAnywhere)
    bool bApplyFeedbackAtRanged;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* FeedbackData;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* OwnerFeedbackData;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData FeedbackScale;
    
public:
    UAnimNotify_Feedback();
};

