#include "GbxInputComponent.h"

class UGbxInputActionData_Discrete;
class UGbxInputActionData_Continuous_Vector;

void UGbxInputComponent::StartInputConsumeKeyImpl() {
}

void UGbxInputComponent::StartInputAction_Discrete_Impl(UGbxInputActionData_Discrete* DiscreteAction, bool bConsumeEvent) {
}

void UGbxInputComponent::InputAction_Continuous_Vector_Impl(UGbxInputActionData_Continuous_Vector* AxisAction, const FVector& Value) {
}

UGbxInputComponent::UGbxInputComponent() {
    this->RebindCategory = NULL;
    this->DefaultRebindContext = NULL;
    this->RebindContext = NULL;
}

