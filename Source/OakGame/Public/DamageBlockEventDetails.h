#pragma once
#include "CoreMinimal.h"
#include "DamageBlockEventDetails.generated.h"

class UGbxDamageType;
class UDamageSource;

USTRUCT(BlueprintType)
struct FDamageBlockEventDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UGbxDamageType* DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    UDamageSource* DamageSource;
    
    OAKGAME_API FDamageBlockEventDetails();
};

