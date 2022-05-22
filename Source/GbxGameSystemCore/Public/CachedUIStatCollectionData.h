#pragma once
#include "CoreMinimal.h"
#include "CachedUIStatSectionData.h"
#include "CachedUIStatCollectionData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCachedUIStatCollectionData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FCachedUIStatSectionData> Sections;
    
public:
    FCachedUIStatCollectionData();
};

