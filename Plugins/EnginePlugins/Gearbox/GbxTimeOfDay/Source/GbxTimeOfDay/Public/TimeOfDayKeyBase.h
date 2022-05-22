#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETimeOfDayKeyType.h"
#include "TimeOfDayKeyBase.generated.h"

class UTimeOfDayLayer;

UCLASS(Abstract)
class GBXTIMEOFDAY_API UTimeOfDayKeyBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTimeOfDayLayer* ParentLayer;
    
    UPROPERTY(EditAnywhere)
    float KeyTime;
    
    UPROPERTY()
    bool bEnabled;
    
protected:
    UPROPERTY()
    ETimeOfDayKeyType KeyType;
    
public:
    UTimeOfDayKeyBase();
};

