#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_WeaponAtPoint.generated.h"

class UAIAction_WeaponAtPoint;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_WeaponAtPoint : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_WeaponAtPoint* Action;
    
    UBTTask_AIAction_WeaponAtPoint();
};

