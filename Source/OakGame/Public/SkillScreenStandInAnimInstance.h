#pragma once
#include "CoreMinimal.h"
#include "GbxAnimInstance.h"
#include "SkillScreenStandInAnimInstance.generated.h"

class AOakCharacter_StandIn;

UCLASS(NonTransient)
class USkillScreenStandInAnimInstance : public UGbxAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AOakCharacter_StandIn* StandInCharacter;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsLocked;
    
public:
    USkillScreenStandInAnimInstance();
};

