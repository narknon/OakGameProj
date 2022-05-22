#include "GbxEqsRenderingComponent.h"

void UGbxEqsRenderingComponent::GetAvailableEnvQueryParamRefNames(TArray<FString>& Names) const {
}

UGbxEqsRenderingComponent::UGbxEqsRenderingComponent() {
    this->bExecuteQuery = false;
    this->TraceDrawMode = EEqsTraceDrawMode::None;
}

