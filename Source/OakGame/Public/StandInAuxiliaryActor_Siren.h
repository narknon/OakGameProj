#pragma once
#include "CoreMinimal.h"
#include "StandInAuxiliaryActor.h"
#include "StandInAuxiliaryActor_Siren.generated.h"

class UOakActionAbilityAugmentData;

UCLASS(NonTransient)
class AStandInAuxiliaryActor_Siren : public AStandInAuxiliaryActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LifeTime;
    
    AStandInAuxiliaryActor_Siren();
    UFUNCTION(BlueprintNativeEvent)
    void Initialize(UOakActionAbilityAugmentData* ElementalAugment, UOakActionAbilityAugmentData* EffectAugment);
    
};

