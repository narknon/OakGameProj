#pragma once
#include "CoreMinimal.h"
#include "GbxAnimInstance.h"
#include "EFrontendStandInAnimType.h"
#include "FrontendStandInAnimInstance.generated.h"

class AOakCharacter;
class APlayerStandIn;
class UStandInGlobals;

UCLASS(NonTransient)
class UFrontendStandInAnimInstance : public UGbxAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsCharacterSelect;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EFrontendStandInAnimType StandInType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 StandInSlotIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bIsInNeutralPose;
    
    UPROPERTY(Transient)
    UStandInGlobals* StandInGlobals;
    
    UPROPERTY(Transient)
    AOakCharacter* Character;
    
    UPROPERTY(Transient)
    APlayerStandIn* PlayerStandIn;
    
public:
    UFrontendStandInAnimInstance();
};

