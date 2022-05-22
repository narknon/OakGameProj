#pragma once
#include "CoreMinimal.h"
#include "OwnedActionAbilityActor.h"
#include "SingularityInitializationInfo.h"
#include "DataTableValueHandle.h"
#include "PhaseTranceSingularityActor.generated.h"

class AActor;

UCLASS()
class APhaseTranceSingularityActor : public AOwnedActionAbilityActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FSingularityInitializationInfo SingularityInfo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FDataTableValueHandle ImpulseRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FDataTableValueHandle AscendantImpulseRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* IgnoreActor;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_SingularityRadius, meta=(AllowPrivateAccess=true))
    float SingularityRadius;
    
public:
    APhaseTranceSingularityActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_SingularityRadius();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ConfigureSingularity();
    
};

