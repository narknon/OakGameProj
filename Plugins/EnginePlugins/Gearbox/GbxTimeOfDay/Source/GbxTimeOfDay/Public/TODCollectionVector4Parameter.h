#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Materials/MaterialParameterCollection.h"
#include "TODCollectionVector4Parameter.generated.h"

USTRUCT(BlueprintType)
struct FTODCollectionVector4Parameter : public FCollectionParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector4 DefaultValue;
    
    GBXTIMEOFDAY_API FTODCollectionVector4Parameter();
};

