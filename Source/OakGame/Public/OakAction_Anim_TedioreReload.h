#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakAction_Anim.h"
#include "OakAction_Anim_TedioreReload.generated.h"

class UGbxAction;

UCLASS()
class OAKGAME_API UOakAction_Anim_TedioreReload : public UOakAction_Anim {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxAction> ActionClassToStopOnEndIfNotSuccessful;
    
    UPROPERTY(EditDefaultsOnly)
    FName UnhideWeaponReason;
    
public:
    UOakAction_Anim_TedioreReload();
};

