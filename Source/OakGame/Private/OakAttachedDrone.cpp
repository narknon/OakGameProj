#include "OakAttachedDrone.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"
#include "OakDamageComponent.h"
#include "WwiseAudioComponent.h"
#include "TeamComponent.h"
#include "Components/StaticMeshComponent.h"

class UPrimitiveComponent;
class AActor;

void AOakAttachedDrone::SphereComponent_OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void AOakAttachedDrone::OnRep_WantedLocation() {
}




UWwiseAudioComponent* AOakAttachedDrone::GetWwiseAudioComponent() const {
    return NULL;
}

void AOakAttachedDrone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakAttachedDrone, LocalOffset);
    DOREPLIFETIME(AOakAttachedDrone, WantedLocation);
    DOREPLIFETIME(AOakAttachedDrone, bIsInCombat);
    DOREPLIFETIME(AOakAttachedDrone, bIsAtIdleLocation);
    DOREPLIFETIME(AOakAttachedDrone, CurrentTargetActor);
}

AOakAttachedDrone::AOakAttachedDrone() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->ExitVehicleBoneAnim = NULL;
    this->EnterVehicleBoneAnim = NULL;
    this->IdleFloatCurve = NULL;
    this->FloatCycleTime = 2.00f;
    this->FloatHeightDelta = 50.00f;
    this->MovementCurve = NULL;
    this->MovementTime = 2.00f;
    this->MinMovementDistance = 200.00f;
    this->MaxMovementDistance = 300.00f;
    this->RotationSpeed = 180.00f;
    this->OwnerAccelerationEffect = NULL;
    this->DeathTime = 5.00f;
    this->ExitBlendTime = 0.20f;
    this->EnterBlendTime = 0.50f;
    this->bExplodeOnContact = true;
    this->bActiveWhenVehicleHasDriver = true;
    this->bActiveWhenVehicleHasOccupant = false;
    this->bActiveWhenVehicleIsDamaged = false;
    this->bActiveWhenOwnerThreatened = false;
    this->bAlwaysActive = false;
    this->bDebugDrawEllipse = false;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->WwiseAudioComponent = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("WwiseAudioComponent"));
    this->DamageComponent = CreateDefaultSubobject<UOakDamageComponent>(TEXT("OakDamageComponent"));
    this->TeamComponent = CreateDefaultSubobject<UTeamComponent>(TEXT("TeamComponent"));
    this->bIsInCombat = false;
    this->bIsAtIdleLocation = true;
    this->CurrentTargetActor = NULL;
    this->MyVehicle = NULL;
    this->MyVehicleMesh = NULL;
    this->MyVehicleAnimInstance = NULL;
}

