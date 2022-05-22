#include "Splat.h"
#include "Net/UnrealNetwork.h"
#include "Components/DecalComponent.h"

void ASplat::InitializeSplat() {
}

void ASplat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASplat, SplatDataAsset);
}

ASplat::ASplat() {
    this->SplatDataAsset = NULL;
    this->SplatDecal = CreateDefaultSubobject<UDecalComponent>(TEXT("SplatDecal"));
    this->SplatDecalMID = NULL;
    this->GroundingDecal = NULL;
    this->GroundingDecalMID = NULL;
    this->ParticleSystem = NULL;
    this->OverlapCollision = NULL;
    this->ElementalInteraction = NULL;
    this->Audio = NULL;
}

