#pragma once
#include "CoreMinimal.h"
#include "GbxAction_PhysicalDeath.h"
#include "EOakElementalDeathEffects.h"
#include "OakAction_PhysicalDeath.generated.h"

UCLASS()
class OAKGAME_API UOakAction_PhysicalDeath : public UGbxAction_PhysicalDeath {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EOakElementalDeathEffects ElementalDeathEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RagdollWhenGoredRegions;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bSkipForcedDeathPhysicsCheck;
    
public:
    UOakAction_PhysicalDeath();
private:
    UFUNCTION(BlueprintCallable)
    void K2_SetRagdollWhenGoredRegions(int32 NewRagdollWhenGoredRegions);
    
};

