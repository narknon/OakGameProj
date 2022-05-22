#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GbxTestHierarchicalCommandL1.h"
#include "GbxTestHierarchicalCommands.generated.h"

UCLASS(BlueprintType)
class UGbxTestHierarchicalCommands : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGbxTestHierarchicalCommandL1> Commands;
    
    UGbxTestHierarchicalCommands();
};

