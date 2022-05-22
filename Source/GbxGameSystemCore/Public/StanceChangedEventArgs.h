#pragma once
#include "CoreMinimal.h"
#include "EStanceStackLayer.h"
#include "StanceChangedEventArgs.generated.h"

class UStanceData;
class UStanceType;

USTRUCT(BlueprintType)
struct FStanceChangedEventArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStanceStackLayer PreviousLayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStanceType* PreviousStanceType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStanceData* PreviousStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStanceStackLayer NextLayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStanceType* NextStanceType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStanceData* NextStance;
    
    GBXGAMESYSTEMCORE_API FStanceChangedEventArgs();
};

