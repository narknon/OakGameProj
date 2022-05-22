#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PayloadInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPayloadInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 StackCount;
    
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
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 TriggerCount;
    
    OAKGAME_API FPayloadInstanceData();
};

