#pragma once
#include "CoreMinimal.h"
#include "HealthTypeDepletedDetails.generated.h"

class UHealthTypeData;
class UGbxDamageType;

USTRUCT(BlueprintType)
struct FHealthTypeDepletedDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UHealthTypeData* HealthType;
    
    UPROPERTY(BlueprintReadOnly)
    UGbxDamageType* DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Index;
    
    OAKGAME_API FHealthTypeDepletedDetails();
};

