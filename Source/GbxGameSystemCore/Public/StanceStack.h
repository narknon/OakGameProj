#pragma once
#include "CoreMinimal.h"
#include "EStanceStackLayer.h"
#include "StanceStack.generated.h"

class AActor;
class UStanceDataProvider;
class UStanceData;

USTRUCT(BlueprintType)
struct FStanceStack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    AActor* Owner;
    
    UPROPERTY(Transient)
    EStanceStackLayer Top;
    
    UPROPERTY(Transient)
    UStanceDataProvider* Stack[4];
    
    UPROPERTY(Transient)
    EStanceStackLayer LayerCurr;
    
    UPROPERTY(Transient)
    UStanceData* StanceCurr;
    
public:
    GBXGAMESYSTEMCORE_API FStanceStack();
};

