#include "DamageLinkNode.h"
#include "OakDamageComponent.h"
#include "TargetableComponent.h"

void ADamageLinkNode::GetAvailableSocketNames(TArray<FName>& Array) const {
}

ADamageLinkNode::ADamageLinkNode() {
    this->bLinkingEnabled = true;
    this->LinkBeamSocket = TEXT("SnapBeam");
    this->NodeLinkBeam = NULL;
    this->bUseNodeLinkDamage = false;
    this->EnemyLinkBeam = NULL;
    this->EnemyLinkDamageData = NULL;
    this->bUseEnemyLinkDamageData = false;
    this->DeathFX = NULL;
    this->RumbleData = NULL;
    this->OakDamage = CreateDefaultSubobject<UOakDamageComponent>(TEXT("OakDamage"));
    this->Targetable = CreateDefaultSubobject<UTargetableComponent>(TEXT("Targetable"));
}

