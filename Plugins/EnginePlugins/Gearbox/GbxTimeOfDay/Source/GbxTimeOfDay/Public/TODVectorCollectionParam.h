#pragma once
#include "CoreMinimal.h"
#include "TODCollectionParam.h"
#include "TODVectorCollectionParam.generated.h"

USTRUCT()
struct FTODVectorCollectionParam : public FTODCollectionParam {
    GENERATED_BODY()
public:
    GBXTIMEOFDAY_API FTODVectorCollectionParam();
};

