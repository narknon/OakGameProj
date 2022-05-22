#pragma once
#include "CoreMinimal.h"
#include "OakCharacterAnimInstance.h"
#include "PetSpiderantAnimInstance.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UPetSpiderantAnimInstance : public UOakCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RollSprintSpeedStart;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bStartRollSprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RollSprintSpeedStop;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bStopRollSprint;
    
public:
    UPetSpiderantAnimInstance();
};

