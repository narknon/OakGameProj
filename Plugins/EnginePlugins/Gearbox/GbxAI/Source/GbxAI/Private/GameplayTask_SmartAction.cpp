#include "GameplayTask_SmartAction.h"

class AActor;
class UGameplayTask_SmartAction;

void UGameplayTask_SmartAction::UnreserveCallback(AActor* User, AActor* SmartObject, FGameplayTag ActionTag) {
}

void UGameplayTask_SmartAction::SuccessCallback(AActor* User, AActor* SmartObject, FGameplayTag ActionTag) {
}

void UGameplayTask_SmartAction::ReserveCallback(AActor* User, AActor* SmartObject, FGameplayTag ActionTag) {
}

void UGameplayTask_SmartAction::InterruptCallback(AActor* User, AActor* SmartObject, FGameplayTag ActionTag) {
}

void UGameplayTask_SmartAction::EndSmartAction(AActor* User) {
}

UGameplayTask_SmartAction* UGameplayTask_SmartAction::BeginSmartAction(AActor* User, AActor* SmartObject, FGameplayTag ActionTag) {
    return NULL;
}

void UGameplayTask_SmartAction::BeginCallback(AActor* User, AActor* SmartObject, FGameplayTag ActionTag) {
}

UGameplayTask_SmartAction::UGameplayTask_SmartAction() {
}

