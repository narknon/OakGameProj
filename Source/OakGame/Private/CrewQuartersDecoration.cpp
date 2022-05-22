#include "CrewQuartersDecoration.h"
#include "Net/UnrealNetwork.h"

class UCrewQuartersDecorationData;
class AController;
class ACrewQuartersRoom;
class UPrimitiveComponent;

void ACrewQuartersDecoration::StartDefaultAnim() {
}

void ACrewQuartersDecoration::SetInitialDecoration(UCrewQuartersDecorationData* NewDecoration) {
}

void ACrewQuartersDecoration::SetDecoration(UCrewQuartersDecorationData* NewDecoration) {
}

void ACrewQuartersDecoration::SelectNextDecoration() {
}

void ACrewQuartersDecoration::OnUsedSecondaryBy(AController* UserController, UPrimitiveComponent* UsedComponent) {
}

void ACrewQuartersDecoration::OnUsedBy(const FUseEvent& UseEvent) {
}

void ACrewQuartersDecoration::OnRep_CurrentDecoration() {
}

void ACrewQuartersDecoration::OnDecorationAssetLoaded() {
}

void ACrewQuartersDecoration::GetAvailableDecorations(TArray<UCrewQuartersDecorationData*>& OutDecorations, ACrewQuartersRoom* InRoomOverride) {
}

void ACrewQuartersDecoration::ApplyDecoration(UCrewQuartersDecorationData* NewDecoration) {
}

void ACrewQuartersDecoration::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrewQuartersDecoration, CurrentDecoration);
}

ACrewQuartersDecoration::ACrewQuartersDecoration() {
    this->DefaultDecoration = NULL;
    this->DecorationIndex = 0;
    this->CurrentDecoration = NULL;
    this->CurrentAnim = NULL;
    this->DecorationMesh = NULL;
    this->DecorationActor = NULL;
    this->InitialDecoration = NULL;
    this->CurrentDecorationAsset = NULL;
}

