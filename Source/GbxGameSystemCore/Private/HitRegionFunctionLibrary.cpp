#include "HitRegionFunctionLibrary.h"

class AActor;
class UHitRegionData;
class UPrimitiveComponent;

void UHitRegionFunctionLibrary::ResetHitRegionHealth(AActor* Actor, UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent) {
}

void UHitRegionFunctionLibrary::ResetAllHitRegionHealth(AActor* Actor) {
}

void UHitRegionFunctionLibrary::RefillHitRegionHealthByPercent(float RefillPercent, AActor* Actor, UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent) {
}

void UHitRegionFunctionLibrary::RefillHitRegionHealthByAmount(float RefillAmount, AActor* Actor, UHitRegionData* HitRegion, UPrimitiveComponent* AssociatedComponent) {
}

void UHitRegionFunctionLibrary::AssociateComponentWithHitRegion(AActor* Actor, UPrimitiveComponent* ComponentToAssociate, UHitRegionData* HitRegion) {
}

UHitRegionFunctionLibrary::UHitRegionFunctionLibrary() {
}

