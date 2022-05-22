#pragma once
#include "CoreMinimal.h"
#include "ManufacturerGradeData.generated.h"

USTRUCT()
struct FManufacturerGradeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString DisplayName;
    
    GBXINVENTORY_API FManufacturerGradeData();
};

