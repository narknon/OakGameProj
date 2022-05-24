#pragma once
#include "CoreMinimal.h"
#include "GFxItemInspectionMenuEnumIdMap.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct OAKGAME_API FGFxItemInspectionMenuEnumIdMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnum* EnumType;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> IdValues;
    
    FGFxItemInspectionMenuEnumIdMap();
};

