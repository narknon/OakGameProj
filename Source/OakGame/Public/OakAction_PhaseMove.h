#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxAction_Loop.h"
#include "UObject/NoExportTypes.h"
#include "OakAction_PhaseMove.generated.h"

class ACharacter;
class UOakAction_PhaseMove;
class AActor;

UCLASS()
class OAKGAME_API UOakAction_PhaseMove : public UGbxAction_Loop {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float HoverAltitude;
    
    UPROPERTY(EditAnywhere)
    float HoverRadius;
    
    UPROPERTY(EditAnywhere)
    float HoverAccelerationTime;
    
    UPROPERTY(EditAnywhere)
    float HoverSpeed;
    
public:
    UOakAction_PhaseMove();
private:
    UFUNCTION(BlueprintCallable)
    static void PlayPhaseMove(TSubclassOf<UOakAction_PhaseMove> MoveAction, ACharacter* Character, AActor* MoveTarget, FTransform TargetEndTransform, float Duration, AActor* HoverTarget);
    
    UFUNCTION(BlueprintPure)
    AActor* K2_GetMoveTarget() const;
    
    UFUNCTION(BlueprintPure)
    AActor* K2_GetHoverTarget() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* K2_GetCharacter() const;
    
};

