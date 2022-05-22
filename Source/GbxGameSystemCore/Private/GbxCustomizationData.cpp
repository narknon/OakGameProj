#include "GbxCustomizationData.h"

class AActor;
class UGbxAction;

bool UGbxCustomizationData::RemoveCustomizationFromActor(AActor* TargetActor) const {
    return false;
}

void UGbxCustomizationData::OnCustomizationAssetLoaded() {
}

UGbxAction* UGbxCustomizationData::K2_PlayAction(AActor* TargetActor, const FActionState_Base& ActionData) {
    return NULL;
}

bool UGbxCustomizationData::IsLoading() {
    return false;
}

bool UGbxCustomizationData::IsLoaded(int32 OptionalCustomizationId) const {
    return false;
}

void UGbxCustomizationData::AsyncLoadCustomizationAssets(const FCustomizationAssetLoaded& LoadedDelegate) {
}

bool UGbxCustomizationData::ApplyCustomizationToActor(AActor* TargetActor, int32 OptionalCustomizationId) const {
    return false;
}

UGbxCustomizationData::UGbxCustomizationData() {
    this->ItemCardTypeFrameName = TEXT("DesignerFixMe");
    this->CustomizationType = NULL;
    this->bUnlockedByDefault = false;
    this->bEquippedByDefault = false;
    this->DefaultSkin = NULL;
    this->DependentBody = NULL;
}

