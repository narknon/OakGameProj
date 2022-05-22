#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "WeaponSightEffectTableData.generated.h"

USTRUCT()
struct FWeaponSightEffectTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor CrosshairColor;
    
    OAKGAME_API FWeaponSightEffectTableData();
};

