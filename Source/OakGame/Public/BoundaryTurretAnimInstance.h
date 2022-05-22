#pragma once
#include "CoreMinimal.h"
#include "GbxAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "BoundaryTurretAnimInstance.generated.h"

class ABoundaryTurret;

UCLASS(NonTransient)
class OAKGAME_API UBoundaryTurretAnimInstance : public UGbxAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ABoundaryTurret* OwnerTurret;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PivotSocketName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator BarrelRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bInvertTurret;
    
public:
    UBoundaryTurretAnimInstance();
};

