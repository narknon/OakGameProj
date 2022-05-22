#pragma once
#include "CoreMinimal.h"
#include "EnvQueryParams.h"
#include "GRMLNBeamData.generated.h"

class UDamageComponent;
class AOakDroneProjectile_GRMLN;
class AActor;

USTRUCT()
struct FGRMLNBeamData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AOakDroneProjectile_GRMLN* Owner;
    
    UPROPERTY(Transient)
    AActor* CurrentTarget;
    
    UPROPERTY(Export, Transient)
    UDamageComponent* TargetDamageComponent;
    
    UPROPERTY(Transient)
    FEnvQueryParams TargetQueryParams;
    
public:
    OAKGAME_API FGRMLNBeamData();
};

