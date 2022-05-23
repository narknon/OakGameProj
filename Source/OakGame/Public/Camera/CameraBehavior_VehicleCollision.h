#pragma once
#include "CoreMinimal.h"
#include "CameraBehavior.h"
#include "UObject/NoExportTypes.h"
#include "CameraBehavior_VehicleCollision.generated.h"

UCLASS(EditInlineNew)
class OAKGAME_API UCameraBehavior_VehicleCollision : public UCameraBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LocalOriginRayCast;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DodgeRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimalRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementDampingSpeed;
    
    UCameraBehavior_VehicleCollision();
};

