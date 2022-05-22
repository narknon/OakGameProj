#include "PreviewComponent.h"

class UBlueprint;

void UPreviewComponent::OnBlueprintCompiled(UBlueprint* BP) {
}

UPreviewComponent::UPreviewComponent() {
    this->bSpawnInPIE = false;
    this->bPreviewEnabled = true;
    this->PreviewActor = NULL;
    this->bEnabled = false;
}

