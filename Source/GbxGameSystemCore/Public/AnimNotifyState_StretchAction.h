#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_StretchAction.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class GBXGAMESYSTEMCORE_API UAnimNotifyState_StretchAction : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bRotate;
    
    UPROPERTY(EditAnywhere)
    bool bTranslate;
    
public:
    UAnimNotifyState_StretchAction();
};

