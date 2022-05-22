#include "GFxBillboardComponent.h"

void UGFxBillboardComponent::OnMovieStarted() {
}

UGFxBillboardComponent::UGFxBillboardComponent() {
    this->TextureParameterName = TEXT("SWFTexture");
    this->bShouldBillboard = true;
    this->CustomTranslucentSortPriority = 99999;
    this->DistanceScaleCurve = NULL;
    this->DistanceAlphaCurve = NULL;
    this->TrackedPlayerController = NULL;
    this->CurrentMovie = NULL;
    this->RenderTarget = NULL;
    this->DisplayedMaterial = NULL;
}

