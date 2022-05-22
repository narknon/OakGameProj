#pragma once
#include "CoreMinimal.h"
#include "InventoryGenericPartData.h"
#include "OakWeaponMayhemPartData.generated.h"

class UUIStatData_Text;

UCLASS()
class OAKGAME_API UOakWeaponMayhemPartData : public UInventoryGenericPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 MayhemLevel;
    
    UPROPERTY(Transient)
    UUIStatData_Text* MayhemLevelStat;
    
public:
    UOakWeaponMayhemPartData();
};

