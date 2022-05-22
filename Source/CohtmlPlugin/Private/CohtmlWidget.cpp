#include "CohtmlWidget.h"

class UObject;
class UStructProperty;
class UCohtmlJSEvent;
class UTextureRenderTarget2D;

void UCohtmlWidget::UpdateWholeDataModelFromStruct(const UStructProperty* Struct) const {
}

void UCohtmlWidget::UpdateWholeDataModelFromObject(UObject* Model) const {
}

void UCohtmlWidget::TriggerJSEvent(const FString& Name, UCohtmlJSEvent* EventData) const {
}

void UCohtmlWidget::SynchronizeModels() const {
}

void UCohtmlWidget::ShowPaintRects(bool show) {
}

void UCohtmlWidget::SetSoundAttenuation(const FSoundAttenuationSettings& Settings) {
}

void UCohtmlWidget::SetInputPropagationBehaviour(TEnumAsByte<ECohtmlInputPropagationBehaviour::Type> Propagation) {
}

void UCohtmlWidget::Reload() {
}

void UCohtmlWidget::Load(const FString& Path) {
}

bool UCohtmlWidget::IsReadyToCreateView() const {
    return false;
}

bool UCohtmlWidget::IsReadyForBindings() const {
    return false;
}

bool UCohtmlWidget::HasRequestedView() const {
    return false;
}

UTextureRenderTarget2D* UCohtmlWidget::GetRenderTexture() const {
    return NULL;
}

TEnumAsByte<ECohtmlInputPropagationBehaviour::Type> UCohtmlWidget::GetInputPropagationBehaviour() const {
    return ECohtmlInputPropagationBehaviour::None;
}

UCohtmlJSEvent* UCohtmlWidget::CreateJSEvent() {
    return NULL;
}

void UCohtmlWidget::CreateDataModelFromStruct(const FString& Name, const UStructProperty* Struct) {
}

void UCohtmlWidget::CreateDataModelFromObject(const FString& Name, UObject* Model) {
}

UCohtmlWidget::UCohtmlWidget() {
    this->Owner = NULL;
    this->bEnableComplexCSSSupport = true;
    this->Filter = TF_Nearest;
    this->bReceiveInput = true;
    this->InputPropagationBehaviour = ECohtmlInputPropagationBehaviour::None;
    this->bGammaCorrectedMaterial = true;
    this->TickPeriodInMinimizedGame = 0.00f;
    this->AudioWrapper = NULL;
}

