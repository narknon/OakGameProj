#pragma once
#include "CoreMinimal.h"
#include "CrewQuartersInteractiveObject.h"
#include "TrophyCaseReplicatedSet.h"
#include "TrophyCase.generated.h"

UCLASS()
class ATrophyCase : public ACrewQuartersInteractiveObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_TrophyCaseReplicatedSets)
    TArray<FTrophyCaseReplicatedSet> TrophyCaseReplicatedSets;
    
    ATrophyCase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_TrophyCaseReplicatedSets();
    
};

