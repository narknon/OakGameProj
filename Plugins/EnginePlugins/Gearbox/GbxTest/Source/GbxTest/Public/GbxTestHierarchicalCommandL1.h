#pragma once
#include "CoreMinimal.h"
#include "GbxTestHierarchicalCommandL2.h"
#include "GbxTestHierarchicalCommandL1.generated.h"

USTRUCT(BlueprintType)
struct FGbxTestHierarchicalCommandL1 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString TestCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGbxTestHierarchicalCommandL2> SubCommands;
    
    GBXTEST_API FGbxTestHierarchicalCommandL1();
};

