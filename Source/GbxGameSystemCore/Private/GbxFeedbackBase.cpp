#include "GbxFeedbackBase.h"

class UObject;
class UGbxFeedbackBase;
class AGbxPlayerController;

void UGbxFeedbackBase::StopGbxFeedback(const UGbxFeedbackBase* FeedbackData, UObject* WorldContextObject, AGbxPlayerController* Controller) {
}

void UGbxFeedbackBase::PlayGbxFeedbackData3D(const UGbxFeedbackBase* FeedbackData, UObject* WorldContextObject, AGbxPlayerController* Controller, FVector SourceLocation, bool bLoop, bool bIgnoreController, float Scale, UObject* SourceContext, float EffectFalloffMinDistance, float EffectFalloffMaxDistance) {
}

void UGbxFeedbackBase::PlayGbxFeedbackData2D(const UGbxFeedbackBase* FeedbackData, UObject* WorldContextObject, AGbxPlayerController* Controller, bool bLoop, bool bIgnoreController, float Scale, UObject* SourceContext) {
}

UGbxFeedbackBase::UGbxFeedbackBase() {
}

