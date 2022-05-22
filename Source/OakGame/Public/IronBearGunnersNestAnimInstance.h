#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "IronBearGunnersNestAnimInstance.generated.h"

class ASeatPawn;

UCLASS(NonTransient)
class OAKGAME_API UIronBearGunnersNestAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FRotator TurretRotator;
    
private:
    UPROPERTY(Transient)
    ASeatPawn* SeatPawnActor;
    
    UPROPERTY(Transient)
    bool bDetaching;
    
public:
    UIronBearGunnersNestAnimInstance();
};

