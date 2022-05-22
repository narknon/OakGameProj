#pragma once
#include "CoreMinimal.h"
#include "ActiveGbxFeedbackEffect.generated.h"

class UGbxFeedbackData;
class AGbxPlayerController;
class UObject;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FActiveGbxFeedbackEffect {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxFeedbackData* ActiveData;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxPlayerController> Controller;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> SourceContext;
    
    FActiveGbxFeedbackEffect();
};

