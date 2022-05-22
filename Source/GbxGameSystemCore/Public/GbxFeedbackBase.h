#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UObject/NoExportTypes.h"
#include "GbxFeedbackBase.generated.h"

class UObject;
class UGbxFeedbackBase;
class AGbxPlayerController;

UCLASS(Abstract, BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxFeedbackBase : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UGbxFeedbackBase();
    UFUNCTION(BlueprintCallable)
    static void StopGbxFeedback(const UGbxFeedbackBase* FeedbackData, UObject* WorldContextObject, AGbxPlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static void PlayGbxFeedbackData3D(const UGbxFeedbackBase* FeedbackData, UObject* WorldContextObject, AGbxPlayerController* Controller, FVector SourceLocation, bool bLoop, bool bIgnoreController, float Scale, UObject* SourceContext, float EffectFalloffMinDistance, float EffectFalloffMaxDistance);
    
    UFUNCTION(BlueprintCallable)
    static void PlayGbxFeedbackData2D(const UGbxFeedbackBase* FeedbackData, UObject* WorldContextObject, AGbxPlayerController* Controller, bool bLoop, bool bIgnoreController, float Scale, UObject* SourceContext);
    
};

