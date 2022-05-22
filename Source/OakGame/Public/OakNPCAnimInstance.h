#pragma once
#include "CoreMinimal.h"
#include "TrooperAnimInstance.h"
#include "OakNPCAnimInstance.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UOakNPCAnimInstance : public UTrooperAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NPCEmoteWeightModifier;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AddPoseSlotWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FullEmoteWeight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FullEmoteWeightWithSlot;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FullBodySlotWeight;
    
public:
    UOakNPCAnimInstance();
};

