#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "OakCharacterAbilityListData.generated.h"

class UOakAbility;

UCLASS()
class UOakCharacterAbilityListData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UOakAbility>> Abilities;
    
public:
    UOakCharacterAbilityListData();
};

