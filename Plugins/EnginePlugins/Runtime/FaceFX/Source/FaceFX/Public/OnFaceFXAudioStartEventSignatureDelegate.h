#pragma once
#include "CoreMinimal.h"
#include "OnFaceFXAudioStartEventSignatureDelegate.generated.h"

class USkeletalMeshComponent;
class UFaceFXAudioComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnFaceFXAudioStartEventSignature, USkeletalMeshComponent*, SkelMeshComp, const FName&, AnimId, bool, IsAudioStarted, UFaceFXAudioComponent*, AudioComponentStartedOn);

