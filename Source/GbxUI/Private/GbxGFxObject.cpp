#include "GbxGFxObject.h"

void UGbxGFxObject::SetOffsetDisplayTransform(const FTransform& Transform) {
}

void UGbxGFxObject::SetBaseDisplayTransform(const FTransform& Transform) {
}

void UGbxGFxObject::RotateAboutPoint(const float Degrees, const FVector2D& Point) {
}

FTransform UGbxGFxObject::GetOffsetDisplayTransform() const {
    return FTransform{};
}

FTransform UGbxGFxObject::GetBaseDisplayTransform() const {
    return FTransform{};
}

UGbxGFxObject::UGbxGFxObject() {
    this->OwningMovie = NULL;
}

