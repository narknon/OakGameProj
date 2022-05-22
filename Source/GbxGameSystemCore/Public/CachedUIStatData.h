#pragma once
#include "CoreMinimal.h"
#include "EUIStatComparisonResult.h"
#include "CachedUIStatData.generated.h"

class UUIStatData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCachedUIStatData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UUIStatData* Stat;
    
    UPROPERTY(Transient)
    FText Description;
    
    UPROPERTY(Transient)
    FText ValueText;
    
    UPROPERTY(Transient)
    float ComparisonValue;
    
    UPROPERTY(Transient)
    EUIStatComparisonResult ComparisonResult;
    
public:
    FCachedUIStatData();
};

