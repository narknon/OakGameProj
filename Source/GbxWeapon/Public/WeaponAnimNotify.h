#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "WeaponAnimNotify.generated.h"

UCLASS(Abstract, CollapseCategories)
class GBXWEAPON_API UWeaponAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bTriggerOnFirstPerson;
    
    UWeaponAnimNotify();
};

