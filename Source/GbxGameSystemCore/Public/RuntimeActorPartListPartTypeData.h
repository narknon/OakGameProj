#pragma once
#include "CoreMinimal.h"
#include "RuntimeActorPartListPartTypeData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FRuntimeActorPartListPartTypeData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    int32 StartIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumParts;
    
public:
    FRuntimeActorPartListPartTypeData();
};

