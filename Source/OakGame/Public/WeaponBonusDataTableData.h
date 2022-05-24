#pragma once
#include "CoreMinimal.h"
#include "WeaponBonusDataTableAttributeMappingData.h"
#include "GbxDataAsset.h"
#include "WeaponBonusDataTableColumnCollectionData.h"
#include "WeaponBonusDataTableData.generated.h"

class UDataTable;

UCLASS()
class OAKGAME_API UWeaponBonusDataTableData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UDataTable* DataTable;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponBonusDataTableAttributeMappingData> AttributeMapping;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponBonusDataTableColumnCollectionData> ColumnCollections;
    
public:
    UWeaponBonusDataTableData();
protected:
    UFUNCTION()
    void EnumerateDataTableColumnNames(TArray<FString>& OutColumnNames) const;
    
};

