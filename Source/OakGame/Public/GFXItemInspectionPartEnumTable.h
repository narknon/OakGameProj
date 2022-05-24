#pragma once
#include "CoreMinimal.h"
#include "GFxItemInspectionMenuEnumIdMap.h"
#include "GFXItemInspectionPartEnumTable.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FGFXItemInspectionPartEnumTable {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGFxItemInspectionMenuEnumIdMap> IdMap;
    
    FGFXItemInspectionPartEnumTable();
};

