#pragma once
#include "CoreMinimal.h"
#include "CausedDamageDetails.h"
#include "CauseAnyPipelineDamageDelegateDelegate.generated.h"

class AActor;
class UGbxDamageType;
class UDamageSource;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FCauseAnyPipelineDamageDelegate, AActor*, DamageInstigator, float, Damage, const UGbxDamageType*, DamageType, const UDamageSource*, DamageSource, AActor*, DamagedActor, FCausedDamageDetails, Details);

