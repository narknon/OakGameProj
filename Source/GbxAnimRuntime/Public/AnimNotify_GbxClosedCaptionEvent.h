#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_GbxCustomEvent.h"
#include "AnimNotify_GbxClosedCaptionEvent.generated.h"

UCLASS(CollapseCategories)
class GBXANIMRUNTIME_API UAnimNotify_GbxClosedCaptionEvent : public UAnimNotify_GbxCustomEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ClosedCaption;
    
    UAnimNotify_GbxClosedCaptionEvent();
};

