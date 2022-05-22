#include "DamageIndicator.h"

class AActor;

void UDamageIndicator::SetDamageCauser(AActor* NewDamageActor) {
}


UDamageIndicator::UDamageIndicator() : UUserWidget(FObjectInitializer::Get()) {
    this->ShowDuration = 5.00f;
    this->FadeOutDuration = 10.00f;
    this->DamageCauser = NULL;
}

