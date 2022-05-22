#pragma once
#include "CoreMinimal.h"
#include "CommandRing.h"
#include "AttributeInitializationData.h"
#include "CommandRing_Operative_GRMLN.generated.h"

class UOakActionAbility_GRMLN;
class UParticleSystemComponent;
class UWwiseEvent;

UCLASS()
class ACommandRing_Operative_GRMLN : public ACommandRing {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BeamComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FName BeamEmitterName;
    
    UPROPERTY(EditDefaultsOnly)
    FName DroneSocket;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* BeamStartEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* BeamStopEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData RingRange;
    
    UPROPERTY(Transient)
    UOakActionAbility_GRMLN* OwnerActionAbility;
    
public:
    ACommandRing_Operative_GRMLN();
    UFUNCTION(BlueprintCallable)
    void StopLookingForTarget();
    
    UFUNCTION(BlueprintCallable)
    void StartLookingForTarget();
    
};

