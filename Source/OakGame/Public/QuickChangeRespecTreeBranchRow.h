#pragma once
#include "CoreMinimal.h"
#include "QuickChangeRespecTreeBranchRow.generated.h"

class UGbxGFxObject;

USTRUCT(BlueprintType)
struct OAKGAME_API FQuickChangeRespecTreeBranchRow {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> Entries;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RespecAnim;
    
    FQuickChangeRespecTreeBranchRow();
};

