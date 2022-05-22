#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReflectedDamageParams.generated.h"

class UGbxDamageType;

USTRUCT(BlueprintType)
struct FReflectedDamageParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DamageScale;
    
    UPROPERTY(EditAnywhere)
    float DamageTakenScale;
    
    UPROPERTY(EditAnywhere)
    bool bReflectTowardAttacker;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    GBXGAMESYSTEMCORE_API FReflectedDamageParams();
};

