#pragma once
#include "CoreMinimal.h"
#include "PhaseTranceGraspEventSignatureDelegate.h"
#include "OakPlayerAbilityEventHub.h"
#include "SimplePhaseTranceEventSignatureDelegate.h"
#include "PhaseTranceEventSignatureDelegate.h"
#include "PhaseTranceGraspKilledEventSignatureDelegate.h"
#include "OakPlayerAbilityEventHub_Siren.generated.h"

UCLASS()
class UOakPlayerAbilityEventHub_Siren : public UOakPlayerAbilityEventHub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPhaseTranceEventSignature PhaseTranceComboActivated;
    
    UPROPERTY(BlueprintAssignable)
    FPhaseTranceEventSignature PhaseTranceComboChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FPhaseTranceGraspEventSignature PhaseTranceGraspedTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimplePhaseTranceEventSignature PhaseTranceGraspMissed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FPhaseTranceGraspKilledEventSignature PhaseTranceGraspTargetKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimplePhaseTranceEventSignature PhaseTranceActivated;
    
    UOakPlayerAbilityEventHub_Siren();
};

