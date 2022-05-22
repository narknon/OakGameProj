#pragma once
#include "CoreMinimal.h"
#include "GbxProjectileMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "GrenadeProjectileMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UGrenadeProjectileMovementComponent : public UGbxProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationRate;
    
    UGrenadeProjectileMovementComponent();
};

