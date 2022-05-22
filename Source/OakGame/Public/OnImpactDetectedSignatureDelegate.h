#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EVehicleImpactForce.h"
#include "OnImpactDetectedSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnImpactDetectedSignature, AActor*, HitActor, const FHitResult&, Hit, EVehicleImpactForce, ImpactForce);

