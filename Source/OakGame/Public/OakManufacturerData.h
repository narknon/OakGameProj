#pragma once
#include "CoreMinimal.h"
#include "ManufacturerData.h"
#include "Engine/DataTable.h"
#include "OakManufacturerData.generated.h"

class UGameStatData;
class UChallenge;

UCLASS()
class UOakManufacturerData : public UManufacturerData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle WeaponDataTableRow;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftClassPtr<UChallenge>> AssociatedChallenges;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* KillStat;
    
    UOakManufacturerData();
};

