#include "HolsteredGearSlot.h"
#include "GbxActionComponent.h"

AHolsteredGearSlot::AHolsteredGearSlot() {
    this->PendingLikenessActor = NULL;
    this->CurrentLikenessActor = NULL;
    this->ActionComponent = CreateDefaultSubobject<UGbxActionComponent>(TEXT("GbxActionComponent"));
    this->CurrentState = EHolsteredGearState::None;
}

