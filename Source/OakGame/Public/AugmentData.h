#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AugmentData.generated.h"

class AShield;
class AActor;

USTRUCT(BlueprintType)
struct FAugmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AShield* Shield;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 StackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanBeTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInstanceBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InstanceFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 InstanceInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InstanceVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* InstanceActor;
    
    OAKGAME_API FAugmentData();
};

