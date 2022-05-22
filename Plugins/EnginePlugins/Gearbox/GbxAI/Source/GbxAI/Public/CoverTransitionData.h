#pragma once
#include "CoreMinimal.h"
#include "CoverTransitionFilters.h"
#include "CoverTransitionData.generated.h"

class UDataTable;
class UGbxAnimSet;

USTRUCT()
struct GBXAI_API FCoverTransitionData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UDataTable* DataTable;
    
    UPROPERTY(EditAnywhere)
    UGbxAnimSet* AnimSet;
    
    UPROPERTY(EditAnywhere)
    FCoverTransitionFilters Filters;
    
public:
    FCoverTransitionData();
};

