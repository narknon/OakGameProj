#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ElementalPuddleOverlapCollisonComponent.generated.h"

class UBodySetup;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UElementalPuddleOverlapCollisonComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FColor ProbeColor;
    
    UPROPERTY()
    TArray<FVector> ProbePoints;
    
    UPROPERTY()
    float ProbeRadius;
    
    UPROPERTY()
    UBodySetup* BodySetup;
    
public:
    UElementalPuddleOverlapCollisonComponent();
};

