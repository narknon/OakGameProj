#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorComponentActorHitSignatureDelegate.generated.h"

class UCollisionDamageComponent;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FActorComponentActorHitSignature, UCollisionDamageComponent*, Component, AActor*, ActorHit, FVector, ImpactForce);

