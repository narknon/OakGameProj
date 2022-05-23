#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ZoneMapDataSection.generated.h"

USTRUCT(BlueprintType)
struct FZoneMapDataSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString ZoneMapSectionObjectName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText SectionName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector Origin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector Extents;
    
    OAKGAME_API FZoneMapDataSection();
};

