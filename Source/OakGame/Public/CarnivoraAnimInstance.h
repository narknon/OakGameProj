#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CarnivoraAnimInstance.generated.h"

class ACarnivora;

UCLASS(NonTransient)
class OAKGAME_API UCarnivoraAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ACarnivora* CarnivoraOwner;
    
public:
    UCarnivoraAnimInstance();
};

