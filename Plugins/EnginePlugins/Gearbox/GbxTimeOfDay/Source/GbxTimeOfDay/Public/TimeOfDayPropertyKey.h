#pragma once
#include "CoreMinimal.h"
#include "TimeOfDayKeyBase.h"
#include "Materials/MaterialParameterCollection.h"
#include "Materials/MaterialParameterCollection.h"
#include "TODCollectionVector4Parameter.h"
#include "TimeOfDayPropertyKey.generated.h"

UCLASS()
class GBXTIMEOFDAY_API UTimeOfDayPropertyKey : public UTimeOfDayKeyBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TArray<FCollectionScalarParameter> OverrideScalarParameters;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FCollectionVectorParameter> OverrideVectorParameters;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FCollectionScalarParameter> OverrideScalarProperties;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FCollectionVectorParameter> OverrideVectorProperties;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FTODCollectionVector4Parameter> OverrideVector4Properties;
    
public:
    UTimeOfDayPropertyKey();
};

