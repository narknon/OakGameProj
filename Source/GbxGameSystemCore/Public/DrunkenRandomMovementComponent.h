#pragma once
#include "CoreMinimal.h"
#include "DrunkenBaseMovementComponent.h"
#include "DrunkenRandomMovementComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UDrunkenRandomMovementComponent : public UDrunkenBaseMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PathCorrectionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxSpreadAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDepartureAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGravityAffectsDrunkenness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DrunkenGravityScalar;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bFixDrunkenMovementAcceleration;
    
public:
    UDrunkenRandomMovementComponent();
};

