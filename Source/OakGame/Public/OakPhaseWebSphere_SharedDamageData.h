#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakPhaseWebSphere_SharedDamageData.generated.h"

class UGbxDamageType;
class UDamageSource;

USTRUCT(BlueprintType)
struct FOakPhaseWebSphere_SharedDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SharedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UDamageSource> DamageSource;
    
    OAKGAME_API FOakPhaseWebSphere_SharedDamageData();
};

