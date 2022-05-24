#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EQSProxyInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileEQSProxy.generated.h"

class AActor;

UCLASS(BlueprintType)
class GBXWEAPON_API UProjectileEQSProxy : public UObject, public IEQSProxyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FRotator Rotation;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    AActor* ReferenceActor;
    
    UProjectileEQSProxy();
    
    // Fix for true pure virtual functions not being implemented
};

