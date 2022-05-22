#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnMyWeaponHitSomethingDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnMyWeaponHitSomething, AActor*, HitActor, FVector, HitLocation);

