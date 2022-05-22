#include "OakDroneProjectile_GRMLN.h"
#include "Net/UnrealNetwork.h"
#include "GbxCustomizationComponent.h"

class AActor;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UCinematicModeData;
class ULightProjectile;

void AOakDroneProjectile_GRMLN::UpdateActiveTarget() {
}


void AOakDroneProjectile_GRMLN::SetManualTarget(AActor* NewDroneTarget) {
}


void AOakDroneProjectile_GRMLN::SetActiveTargetingEnabled(bool bEnabled) {
}

void AOakDroneProjectile_GRMLN::ServerActivateCalledShot_Implementation(FVector Location) {
}
bool AOakDroneProjectile_GRMLN::ServerActivateCalledShot_Validate(FVector Location) {
    return true;
}

void AOakDroneProjectile_GRMLN::RegisterParticleSystemComponent(FName SocketName, UParticleSystemComponent* InComponent) {
}

void AOakDroneProjectile_GRMLN::OnTargetDied() {
}

void AOakDroneProjectile_GRMLN::OnTargetDestroyed(AActor* DestroyedActor) {
}



void AOakDroneProjectile_GRMLN::OnRep_RuntimeMods() {
}

void AOakDroneProjectile_GRMLN::OnRep_DroneTarget() {
}

void AOakDroneProjectile_GRMLN::OnRep_bIsStaticFieldSearching() {
}


void AOakDroneProjectile_GRMLN::OnCinematicModeChanged(UCinematicModeData* CinematicMode) {
}



void AOakDroneProjectile_GRMLN::NotifyActorComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AOakDroneProjectile_GRMLN::NotifyActorComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AOakDroneProjectile_GRMLN::IsInMovementMode(EOakDroneMovementMode Mode) const {
    return false;
}

bool AOakDroneProjectile_GRMLN::HasValidDroneTarget_Implementation() const {
    return false;
}

bool AOakDroneProjectile_GRMLN::HasGRMLNMod(EGRMLNModType ModType) const {
    return false;
}





void AOakDroneProjectile_GRMLN::ClientNotifyLightProjectileFire(ULightProjectile* Source) {
}



void AOakDroneProjectile_GRMLN::ActivateCalledShot(FVector Location) {
}

void AOakDroneProjectile_GRMLN::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakDroneProjectile_GRMLN, DroneTarget);
    DOREPLIFETIME(AOakDroneProjectile_GRMLN, RuntimeMods);
    DOREPLIFETIME(AOakDroneProjectile_GRMLN, bIsStaticFieldSearching);
}

AOakDroneProjectile_GRMLN::AOakDroneProjectile_GRMLN() {
    this->CustomizationComponent = CreateDefaultSubobject<UGbxCustomizationComponent>(TEXT("CustomizationComponent"));
    this->DroneCollisionComponent = NULL;
    this->PrimaryMeshComponent = NULL;
    this->StaticFieldComponent = NULL;
    this->StaticFieldDamageSource = NULL;
    this->CalledShotDamageSource = NULL;
    this->HUDIconData = NULL;
    this->OwnerActionAbility = NULL;
    this->OwnerPlayer = NULL;
    this->bIsBoostEnabled = false;
    this->bIsStaticFieldSearching = false;
}

