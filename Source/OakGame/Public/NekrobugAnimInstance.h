#pragma once
#include "CoreMinimal.h"
#include "OakCharacterAnimInstance.h"
#include "NekrobugAnimInstance.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UNekrobugAnimInstance : public UOakCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsGround;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GroundLookAtNodeAlpha;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bIsFlyer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FlyerLookAtNodeAlpha;
    
public:
    UNekrobugAnimInstance();
};

