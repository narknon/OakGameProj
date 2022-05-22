#pragma once
#include "CoreMinimal.h"
#include "TODCollectionParam.h"
#include "TODScalarCollectionParam.generated.h"

USTRUCT()
struct FTODScalarCollectionParam : public FTODCollectionParam {
    GENERATED_BODY()
public:
    GBXTIMEOFDAY_API FTODScalarCollectionParam();
};

