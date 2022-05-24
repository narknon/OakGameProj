#include "GbxEqsTestingPawn.h"
#include "DamageComponent.h"
#include "GbxCharacterMovementComponent.h"
#include "TargetableComponent.h"
#include "DamageCauserComponent.h"
#include "GameplayTagContainerComponent.h"

AGbxEqsTestingPawn::AGbxEqsTestingPawn() {
    this->GbxCharacterMovement = CreateDefaultSubobject<UGbxCharacterMovementComponent>(TEXT("CharMoveComp"));
    this->TargetableComponent = CreateDefaultSubobject<UTargetableComponent>(TEXT("TargetableComponent"));
    this->DamageComponent = CreateDefaultSubobject<UDamageComponent>(TEXT("DefaultDamageComponent"));
    this->DamageCauserComponent = CreateDefaultSubobject<UDamageCauserComponent>(TEXT("DefaultDamageCauserComponent"));
    this->GameplayTagContainerComponent = CreateDefaultSubobject<UGameplayTagContainerComponent>(TEXT("DefaultGameplayTagContainerComponent"));
    this->BaseAimHeight = 32.00f;
    this->AimHeightFromGround = 120.00f;
}

