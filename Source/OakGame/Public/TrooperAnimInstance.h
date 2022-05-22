#pragma once
#include "CoreMinimal.h"
#include "OakCharacterAnimInstance.h"
#include "TrooperAnimInstance.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UTrooperAnimInstance : public UOakCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    float LeftHandWeaponIKOffsetLocationX;
    
public:
    UTrooperAnimInstance();
};

