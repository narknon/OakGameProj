#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "OakInputAbilityListData.generated.h"

class UOakInputAbility;

UCLASS()
class UOakInputAbilityListData : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UOakInputAbility>> InputAbilityClasses;
    
public:
    UOakInputAbilityListData();
};

