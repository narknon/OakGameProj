#pragma once
#include "CoreMinimal.h"
#include "SeatPawn.h"
#include "GunnersNestSeatPawn.generated.h"

class UPassthroughBalanceStateComponent;
class UGbxCustomizationComponent;

UCLASS()
class AGunnersNestSeatPawn : public ASeatPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPassthroughBalanceStateComponent* BalanceComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UGbxCustomizationComponent* CustomizationComponent;
    
    AGunnersNestSeatPawn();
};

