#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_GbxAction.generated.h"

UCLASS(CollapseCategories)
class GBXGAMESYSTEMCORE_API UAnimNotify_GbxAction : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName CustomEventName;
    
    UAnimNotify_GbxAction();
};

