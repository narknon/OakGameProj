#include "SplineMovementComponentDoubleLinked.h"
#include "Net/UnrealNetwork.h"

void USplineMovementComponentDoubleLinked::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USplineMovementComponentDoubleLinked, CartInFront);
    DOREPLIFETIME(USplineMovementComponentDoubleLinked, CartBehind);
}

USplineMovementComponentDoubleLinked::USplineMovementComponentDoubleLinked() {
    this->CartInFront = NULL;
    this->CartBehind = NULL;
    this->DistanceFromCartInFront = 100.00f;
    this->DistanceFromCartBehind = 100.00f;
}

