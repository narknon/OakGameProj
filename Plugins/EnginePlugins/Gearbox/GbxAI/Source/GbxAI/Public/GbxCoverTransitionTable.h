#pragma once
#include "CoreMinimal.h"
#include "GbxAnimTable.h"
#include "CoverTransitionFilters.h"
#include "GbxCoverTransitionTable.generated.h"

class UGbxAnimSet;

UCLASS()
class GBXAI_API UGbxCoverTransitionTable : public UGbxAnimTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UGbxAnimSet* AnimSet;
    
    UPROPERTY(EditAnywhere)
    FCoverTransitionFilters Filters;
    
    UPROPERTY(EditAnywhere)
    float DefaultHeight;
    
public:
    UGbxCoverTransitionTable();
};

