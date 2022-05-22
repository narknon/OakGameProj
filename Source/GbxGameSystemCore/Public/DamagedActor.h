#pragma once
#include "CoreMinimal.h"
#include "DamagedActor.generated.h"

class AActor;
class UDamageComponent;

USTRUCT(BlueprintType)
struct FDamagedActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Actor;
    
    UPROPERTY(Export)
    UDamageComponent* DamageComponent;
    
    GBXGAMESYSTEMCORE_API FDamagedActor();
};

