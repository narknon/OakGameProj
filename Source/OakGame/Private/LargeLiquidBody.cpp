#include "LargeLiquidBody.h"
#include "ElementalInteractionComponent.h"
#include "ProceduralMeshComponent.h"
#include "RegionBalanceStateComponent.h"
#include "GbxNavMeshPainterComponent.h"

class UPrimitiveComponent;
class AActor;

void ALargeLiquidBody::OnEndOverlapSurfaceMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ALargeLiquidBody::OnEndNegateElementalDamage(AActor* OverlappedActor, AActor* OtherActor) {
}

void ALargeLiquidBody::OnElementalReactionDestroyed(AActor* ElementalReaction) {
}

void ALargeLiquidBody::OnBeginOverlapSurfaceMesh(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ALargeLiquidBody::OnBeginNegateElementalDamage(AActor* OverlappedActor, AActor* OtherActor) {
}

ALargeLiquidBody::ALargeLiquidBody() {
    this->LargeLiquidBodyConfiguration = NULL;
    this->bPlayDefaultPuddleAudio = true;
    this->UseFloorMesh = false;
    this->IsSeaLevelActor = false;
    this->bOverrideColor = false;
    this->bOverrideOpacity = false;
    this->bOverrideNormalStrength = false;
    this->bOverrideMovementSpeed = false;
    this->bOverrideDepthFade = false;
    this->FloorMesh_Material = NULL;
    this->FloorMesh_Offset = 15.00f;
    this->SeaLevelMaterialParameterCollection = NULL;
    this->SeaLevelValue = 0.00f;
    this->Opacity = 1.00f;
    this->NormalStrength = 0.50f;
    this->MovementSpeed = 0.50f;
    this->DepthFade = 10.00f;
    this->LiquidAudioComponent = NULL;
    this->LiquidSurfaceMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("LiquidSurfaceMesh"));
    this->BalanceState = CreateDefaultSubobject<URegionBalanceStateComponent>(TEXT("BalanceState"));
    this->ElementalInteraction = CreateDefaultSubobject<UElementalInteractionComponent>(TEXT("ElementalInteraction"));
    this->PainterComponent = CreateDefaultSubobject<UGbxNavMeshPainterComponent>(TEXT("PainterComponent"));
}

