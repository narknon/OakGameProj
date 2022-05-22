#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotify_CatchPickup.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotify_CatchPickup : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName HideWeaponLock;
    
    UPROPERTY(EditAnywhere)
    FName HideWeaponBone;
    
    UAnimNotify_CatchPickup();
};

