#include "GbxCustomizationComponent.h"
#include "Net/UnrealNetwork.h"

class UGbxCustomizationData;
class UGbxCustomizationComponent;

void UGbxCustomizationComponent::ServerApplyCustomizationData_Implementation(UGbxCustomizationData* CustomizationToApply, int32 OptionalCustomizationId) {
}
bool UGbxCustomizationComponent::ServerApplyCustomizationData_Validate(UGbxCustomizationData* CustomizationToApply, int32 OptionalCustomizationId) {
    return true;
}

void UGbxCustomizationComponent::ServerApplyCustomColor_Implementation(int32 CustomColorIndex, FVector InAppliedColor, FVector InSplitColor, bool InUseDefaultColor, bool InUseDefaultSplitColor) {
}
bool UGbxCustomizationComponent::ServerApplyCustomColor_Validate(int32 CustomColorIndex, FVector InAppliedColor, FVector InSplitColor, bool InUseDefaultColor, bool InUseDefaultSplitColor) {
    return true;
}

bool UGbxCustomizationComponent::RemoveCustomization(UGbxCustomizationData* Customization) {
    return false;
}

void UGbxCustomizationComponent::OnRep_CustomColorSelections() {
}

void UGbxCustomizationComponent::LinkToCustomization(UGbxCustomizationComponent* SourceComponent) {
}

void UGbxCustomizationComponent::LinkedCustomizationRemoved(UGbxCustomizationData* Customization) {
}

void UGbxCustomizationComponent::LinkedCustomizationApplied(UGbxCustomizationData* Customization) {
}

bool UGbxCustomizationComponent::GetDefaultCustomSplitColor(int32 SelectionIndex, FLinearColor& DefaultSplitColor) {
    return false;
}

bool UGbxCustomizationComponent::GetDefaultCustomColor(int32 SelectionIndex, FLinearColor& DefaultColor) {
    return false;
}

void UGbxCustomizationComponent::CopyFromCustomization(UGbxCustomizationComponent* SourceComponent) {
}

void UGbxCustomizationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGbxCustomizationComponent, CustomizationList);
    DOREPLIFETIME(UGbxCustomizationComponent, CustomColorSelections);
}

UGbxCustomizationComponent::UGbxCustomizationComponent() {
    this->CustomizationSourceInitType = EGbxCustomizationComponentInitSourceType::None;
    this->LinkedCustomizationSource = NULL;
    this->bUseCustomMaterials = false;
}

