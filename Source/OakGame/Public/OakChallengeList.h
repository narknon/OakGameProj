#pragma once
#include "CoreMinimal.h"
#include "ChallengeList.h"
#include "EOakLeague.h"
#include "Engine/DataTable.h"
#include "OakChallengeList.generated.h"

UCLASS()
class UOakChallengeList : public UChallengeList {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    uint32 AssociatedVaultCardID;
    
protected:
    UPROPERTY()
    FDataTableRowHandle AssociatedSeasonHandle;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EOakLeague> ChallengeListLeague;
    
public:
    UOakChallengeList();
};

