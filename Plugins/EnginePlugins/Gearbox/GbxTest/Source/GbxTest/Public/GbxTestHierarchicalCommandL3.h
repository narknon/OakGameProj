#pragma once
#include "CoreMinimal.h"
#include "GbxTestHierarchicalCommandL3.generated.h"

USTRUCT(BlueprintType)
struct FGbxTestHierarchicalCommandL3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString TestCommand;
    
    GBXTEST_API FGbxTestHierarchicalCommandL3();
};

