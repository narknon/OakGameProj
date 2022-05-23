#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PlayerMeleeFOVToggle.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_PlayerMeleeFOVToggle : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bActivate;
    
    UAnimNotify_PlayerMeleeFOVToggle();
};

