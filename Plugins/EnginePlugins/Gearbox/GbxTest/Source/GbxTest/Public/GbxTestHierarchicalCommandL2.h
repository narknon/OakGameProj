#pragma once
#include "CoreMinimal.h"
#include "GbxTestHierarchicalCommandL3.h"
#include "GbxTestHierarchicalCommandL2.generated.h"

USTRUCT(BlueprintType)
struct FGbxTestHierarchicalCommandL2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString TestCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGbxTestHierarchicalCommandL3> SubCommands;
    
    GBXTEST_API FGbxTestHierarchicalCommandL2();
};

