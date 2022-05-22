#pragma once
#include "CoreMinimal.h"
#include "OakAction_Anim.h"
#include "OakAction_Anim_WeaponReload.generated.h"

UCLASS()
class OAKGAME_API UOakAction_Anim_WeaponReload : public UOakAction_Anim {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FName MagBoneName;
    
public:
    UOakAction_Anim_WeaponReload();
};

