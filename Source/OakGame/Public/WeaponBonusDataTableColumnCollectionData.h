#pragma once
#include "CoreMinimal.h"
#include "WeaponBonusDataTableColumnCollectionData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FWeaponBonusDataTableColumnCollectionData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName CollectionName;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> ColumnNames;
    
public:
    FWeaponBonusDataTableColumnCollectionData();
};

