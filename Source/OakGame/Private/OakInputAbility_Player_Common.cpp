#include "OakInputAbility_Player_Common.h"

class UGbxInputActionData_Continuous_Vector;

void UOakInputAbility_Player_Common::PlayerMove(UGbxInputActionData_Continuous_Vector* ActionData, const FVector& Val) {
}

void UOakInputAbility_Player_Common::PlayerLook(UGbxInputActionData_Continuous_Vector* ActionData, const FVector& Val) {
}

UOakInputAbility_Player_Common::UOakInputAbility_Player_Common() {
    this->LookActionData = NULL;
    this->MoveActionData = NULL;
}

