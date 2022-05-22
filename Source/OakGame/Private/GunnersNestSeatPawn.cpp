#include "GunnersNestSeatPawn.h"
#include "PassthroughBalanceStateComponent.h"
#include "GbxCustomizationComponent.h"

AGunnersNestSeatPawn::AGunnersNestSeatPawn() {
    this->BalanceComponent = CreateDefaultSubobject<UPassthroughBalanceStateComponent>(TEXT("BalanceStateDefault"));
    this->CustomizationComponent = CreateDefaultSubobject<UGbxCustomizationComponent>(TEXT("CustomizationComponent"));
}

