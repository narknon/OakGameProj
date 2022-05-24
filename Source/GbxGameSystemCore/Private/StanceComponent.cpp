#include "StanceComponent.h"
#include "Net/UnrealNetwork.h"

class UStanceData;
class UStanceDataProvider;
class UStanceType;

void UStanceComponent::StackStanceChangedCallback(EStanceStackLayer PreviousLayer, UStanceData* PreviousStance, EStanceStackLayer NextLayer, UStanceData* NextStance) {
}

void UStanceComponent::SetStanceLayer(EStanceStackLayer Layer, UStanceDataProvider* NewStance) {
}

void UStanceComponent::SetBlueprintStance(UStanceDataProvider* NewStance) {
}

void UStanceComponent::OnRep_StanceState() {
}

bool UStanceComponent::IsInStanceType(UStanceType* Type) const {
    return false;
}

bool UStanceComponent::IsInStanceLayer(EStanceStackLayer Layer) const {
    return false;
}

bool UStanceComponent::IsInStance(UStanceDataProvider* Stance) const {
    return false;
}

bool UStanceComponent::IsInAnimStance(UStanceDataProvider* Stance) const {
    return false;
}

float UStanceComponent::GetTimeSpentInCurrentStance() const {
    return 0.0f;
}

EStanceStackLayer UStanceComponent::GetStanceLayer() const {
    return EStanceStackLayer::Default;
}

UStanceData* UStanceComponent::GetStance() const {
    return NULL;
}

UStanceType* UStanceComponent::FindTypeForStance(UStanceData* Stance) const {
    return NULL;
}

UStanceData* UStanceComponent::FindStanceForType(UStanceType* Type) const {
    return NULL;
}

void UStanceComponent::ClearStanceLayer(EStanceStackLayer Layer) {
}

void UStanceComponent::ClearBlueprintStance() {
}

void UStanceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStanceComponent, StanceState);
}

UStanceComponent::UStanceComponent() {
    this->StanceSelector = NULL;
    this->TimeEnteredCurrentStance = 0.00f;
}

