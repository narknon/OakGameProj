#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "UIStatAttributeEffectProvider.h"
#include "WeaponBonusDataTableSelectionData.h"
#include "WeaponBonusAspectData.generated.h"

class UWeaponBonusCollectionData;
class UWeaponBonusDataTableData;

UCLASS(EditInlineNew)
class OAKGAME_API UWeaponBonusAspectData : public UInventoryAspectData, public IUIStatAttributeEffectProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bInitializationBonus;
    
    UPROPERTY(EditAnywhere)
    UWeaponBonusCollectionData* BonusCollection;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BonusesToApply;
    
    UPROPERTY(EditAnywhere)
    TArray<FWeaponBonusDataTableSelectionData> DataTableBonuses;
    
    UPROPERTY(Transient)
    TArray<int32> BonusIndices;
    
public:
    UWeaponBonusAspectData();
private:
    UFUNCTION()
    void EnumerateDataTableRowNames(UWeaponBonusDataTableData* WeaponBonusDataTable, TArray<FName>& OutRowNames) const;
    
    UFUNCTION()
    void EnumerateDataTableColumnNames(UWeaponBonusDataTableData* WeaponBonusDataTable, TArray<FString>& OutColumnNames) const;
    
    UFUNCTION()
    void EnumerateDataTableColumnCollections(UWeaponBonusDataTableData* WeaponBonusDataTable, TArray<FName>& OutColumnCollections) const;
    
    UFUNCTION()
    void EnumerateBonuses(TArray<FName>& OutBonuses) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

