#include "GbxWidgetComponent.h"
#include "Templates/SubclassOf.h"

class UUserWidget;
class UCurveFloat;
class AGbxPlayerController;
class USceneComponent;
class UBorder;

void UGbxWidgetComponent::Setup(const TSubclassOf<UUserWidget>& NewWidgetClass, const AGbxPlayerController* NewTrackedPlayer, USceneComponent* ParentComponent, EWidgetSpace WidgetSpace, int32 NewLayerZOrder, FName CollisionProfile) {
}

void UGbxWidgetComponent::SetDistanceScaleCurve(UCurveFloat* NewDistanceScaleCurve) {
}

void UGbxWidgetComponent::SetDistanceAlphaCurve(UCurveFloat* NewDistanceAlphaCurve) {
}

void UGbxWidgetComponent::SetDistanceAlphaBorder(UBorder* NewDistanceAlphaBorder) {
}

UGbxWidgetComponent::UGbxWidgetComponent() {
    this->DistanceScaleCurve = NULL;
    this->DistanceAlphaCurve = NULL;
    this->DistanceAlphaBorder = NULL;
    this->TrackedPlayerController = NULL;
    this->GbxWidget = NULL;
}

