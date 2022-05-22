#pragma once
#include "CoreMinimal.h"
#include "PlayerInputBinding_Category.h"
#include "PlayerInputBindings.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FPlayerInputBindings {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPlayerInputBinding_Category> Categories;
    
    FPlayerInputBindings();
};

