#include "CohtmlBaseComponent.h"

class UObject;
class UStructProperty;
class UCohtmlJSEvent;

void UCohtmlBaseComponent::UpdateWholeDataModelFromStruct(const UStructProperty* Struct) const {
}

void UCohtmlBaseComponent::UpdateWholeDataModelFromObject(UObject* Model) const {
}

void UCohtmlBaseComponent::TriggerJSEvent(const FString& Name, UCohtmlJSEvent* EventData) const {
}

void UCohtmlBaseComponent::SynchronizeModels() const {
}

void UCohtmlBaseComponent::ShowPaintRects(bool show) {
}

void UCohtmlBaseComponent::SetSoundAttenuation(const FSoundAttenuationSettings& Settings) {
}

void UCohtmlBaseComponent::Resize(int32 Width, int32 Height) {
}

void UCohtmlBaseComponent::Reload() {
}

void UCohtmlBaseComponent::Load(const FString& Path) {
}

bool UCohtmlBaseComponent::IsReadyToCreateView() const {
    return false;
}

bool UCohtmlBaseComponent::IsReadyForBindings() const {
    return false;
}

bool UCohtmlBaseComponent::HasRequestedView() const {
    return false;
}

void UCohtmlBaseComponent::EndDebugFrameSave() {
}

void UCohtmlBaseComponent::EnableRendering(bool bEnabled) {
}

void UCohtmlBaseComponent::EnableDelayedUpdate(bool bEnabled) {
}

void UCohtmlBaseComponent::DebugSaveNextFrame() {
}

UCohtmlJSEvent* UCohtmlBaseComponent::CreateJSEvent() {
    return NULL;
}

void UCohtmlBaseComponent::CreateDataModelFromStruct(const FString& Name, const UStructProperty* Arg) {
}

void UCohtmlBaseComponent::CreateDataModelFromObject(const FString& Name, UObject* Model) {
}

void UCohtmlBaseComponent::BeginDebugFrameSave() {
}

UCohtmlBaseComponent::UCohtmlBaseComponent() {
    this->bEnableComplexCSSSupport = true;
    this->Texture = NULL;
    this->Filter = TF_Nearest;
    this->bReceiveInput = true;
    this->bDelayedUpdate = false;
    this->AudioWrapper = NULL;
}

