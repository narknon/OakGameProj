#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TODCollectionParam.generated.h"

USTRUCT()
struct FTODCollectionParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    FGuid ID;
    
    GBXTIMEOFDAY_API FTODCollectionParam();
};

