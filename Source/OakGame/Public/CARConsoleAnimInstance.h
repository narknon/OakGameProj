#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ECARStatus.h"
#include "CARConsoleAnimInstance.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UCARConsoleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float NearRadiusOfPlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ECARStatus LastStatus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ECARStatus Status;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsUnfolding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool bIsInactive;
    
    UCARConsoleAnimInstance();
};

