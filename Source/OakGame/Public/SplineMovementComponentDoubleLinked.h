#pragma once
#include "CoreMinimal.h"
#include "SplineMovementComponent.h"
#include "SplineMovementComponentDoubleLinked.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USplineMovementComponentDoubleLinked : public USplineMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Replicated)
    AActor* CartInFront;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Replicated)
    AActor* CartBehind;
    
    UPROPERTY(EditAnywhere)
    float DistanceFromCartInFront;
    
    UPROPERTY(EditAnywhere)
    float DistanceFromCartBehind;
    
    USplineMovementComponentDoubleLinked();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

