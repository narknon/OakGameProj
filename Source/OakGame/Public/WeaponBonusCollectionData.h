#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "WeaponBonusData.h"
#include "WeaponBonusCollectionData.generated.h"

UCLASS()
class OAKGAME_API UWeaponBonusCollectionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FWeaponBonusData> Bonuses;
    
public:
    UWeaponBonusCollectionData();
};

