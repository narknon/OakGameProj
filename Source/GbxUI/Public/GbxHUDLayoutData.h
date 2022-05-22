#pragma once
#include "CoreMinimal.h"
#include "GbxHUDLayoutData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FGbxHUDLayoutData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDataTable* Layout;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    GBXUI_API FGbxHUDLayoutData();
};

