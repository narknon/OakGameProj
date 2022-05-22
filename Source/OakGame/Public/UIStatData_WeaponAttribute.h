#pragma once
#include "CoreMinimal.h"
#include "EWeaponUseMode.h"
#include "UIStatData_Attribute.h"
#include "UIStatData_WeaponAttribute.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UUIStatData_WeaponAttribute : public UUIStatData_Attribute {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EWeaponUseMode UseMode;
    
public:
    UUIStatData_WeaponAttribute();
};

