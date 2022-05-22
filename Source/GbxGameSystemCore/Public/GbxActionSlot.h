#pragma once
#include "CoreMinimal.h"
#include "GbxActionSlot.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxActionSlot {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    FGbxActionSlot();
};

