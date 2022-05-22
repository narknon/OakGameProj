#pragma once
#include "CoreMinimal.h"
#include "OakCharacterAnimInstance.h"
#include "GoliathAnimInstance.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGoliathAnimInstance : public UOakCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsEnraged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LookAtNodeAlpha;
    
public:
    UGoliathAnimInstance();
};

