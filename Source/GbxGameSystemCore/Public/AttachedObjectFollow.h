#pragma once
#include "CoreMinimal.h"
#include "AttachedObjectFollow.generated.h"

USTRUCT(BlueprintType)
struct FAttachedObjectFollow {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ObjectBoneName;
    
    UPROPERTY(EditAnywhere)
    FName ObjectHoldBoneName;
    
    UPROPERTY(EditAnywhere)
    FName ObjectHoldBodyName;
    
    GBXGAMESYSTEMCORE_API FAttachedObjectFollow();
};

