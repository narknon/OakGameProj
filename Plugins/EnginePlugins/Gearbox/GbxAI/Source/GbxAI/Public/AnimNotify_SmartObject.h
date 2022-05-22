#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ESmartObjectNotify.h"
#include "AnimNotify_SmartObject.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXAI_API UAnimNotify_SmartObject : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ESmartObjectNotify Action;
    
public:
    UAnimNotify_SmartObject();
};

