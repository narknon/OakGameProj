#pragma once
#include "CoreMinimal.h"
#include "TODCollectionVector4Parameter.h"
#include "UObject/Object.h"
#include "Materials/MaterialParameterCollection.h"
#include "Materials/MaterialParameterCollection.h"
#include "TimeOfDayLayer.generated.h"

class UTimeOfDayCycle;
class UTimeOfDayKeyBase;

UCLASS()
class GBXTIMEOFDAY_API UTimeOfDayLayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTimeOfDayCycle* ParentCycle;
    
    UPROPERTY()
    FString LayerOverrideName;
    
    UPROPERTY()
    TArray<UTimeOfDayKeyBase*> Keys;
    
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
    UTimeOfDayLayer();
};

