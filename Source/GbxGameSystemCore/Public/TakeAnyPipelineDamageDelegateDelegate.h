#pragma once
#include "CoreMinimal.h"
#include "ReceivedDamageDetails.h"
#include "TakeAnyPipelineDamageDelegateDelegate.generated.h"

class UDamageComponent;
class UDamageCauserComponent;
class UGbxDamageType;
class UDamageSource;
class AController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FTakeAnyPipelineDamageDelegate, UDamageComponent*, DamageReceiver, float, Damage, const UGbxDamageType*, DamageType, const UDamageSource*, DamageSource, AController*, InstigatedBy, UDamageCauserComponent*, DamageCauser, FReceivedDamageDetails, Details);

