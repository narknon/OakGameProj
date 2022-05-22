#pragma once
#include "CoreMinimal.h"
#include "WeaponBonusDataTableSelectionData.generated.h"

class UWeaponBonusDataTableData;

USTRUCT(BlueprintType)
struct OAKGAME_API FWeaponBonusDataTableSelectionData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    int32 UseModeBitmask;
    
    UPROPERTY(EditAnywhere)
    UWeaponBonusDataTableData* WeaponBonusDataTable;
    
    UPROPERTY(EditAnywhere)
    FName RowName;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ColumnNames;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> ColumnCollections;
    
public:
    FWeaponBonusDataTableSelectionData();
};

