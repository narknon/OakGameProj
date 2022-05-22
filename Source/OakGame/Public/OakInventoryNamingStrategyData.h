#pragma once
#include "CoreMinimal.h"
#include "InventoryNamingStrategyData.h"
#include "OakInventoryNameData.h"
#include "ExtractedOakInventoryCombinationNameData.h"
#include "OakInventoryNamingStrategyData.generated.h"

class UInventoryPartData;
class UOakInventoryNamingStrategyData;

UCLASS()
class OAKGAME_API UOakInventoryNamingStrategyData : public UInventoryNamingStrategyData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UOakInventoryNamingStrategyData* NamingStrategyToExpand;
    
    UPROPERTY(EditAnywhere)
    int32 MaxContributingParts;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryNameData> TripleNames;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FExtractedOakInventoryCombinationNameData> ExtractedCombinationNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryNameData> SingleNames;
    
    UPROPERTY()
    TArray<uint8> RelevantPartTypes;
    
public:
    UOakInventoryNamingStrategyData();
private:
    UFUNCTION()
    void ForceExtractCombinationNamingData();
    
    UFUNCTION()
    void EnumerateInventoryParts(TArray<UInventoryPartData*>& OutInventoryParts) const;
    
};

