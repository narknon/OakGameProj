#pragma once
#include "CoreMinimal.h"
#include "CachedUIStatData.h"
#include "CachedUIStatSectionData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCachedUIStatSectionData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FName Name;
    
    UPROPERTY(Transient)
    TArray<FCachedUIStatData> Stats;
    
public:
    FCachedUIStatSectionData();
};

