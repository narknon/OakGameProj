#pragma once
#include "CoreMinimal.h"
#include "BTTask_AIAction.h"
#include "BTTask_AIAction_WeaponIdle.generated.h"

class UAIAction_WeaponIdle;

UCLASS(EditInlineNew)
class GBXAI_API UBTTask_AIAction_WeaponIdle : public UBTTask_AIAction {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAIAction_WeaponIdle* Action;
    
    UBTTask_AIAction_WeaponIdle();
};

