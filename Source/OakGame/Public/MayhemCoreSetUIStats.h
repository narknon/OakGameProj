#pragma once
#include "CoreMinimal.h"
#include "MayhemCoreSetUIStats.generated.h"

class UUIStatData;

USTRUCT(BlueprintType)
struct OAKGAME_API FMayhemCoreSetUIStats {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UUIStatData* UIStat_FleshHealthScale;
    
    UPROPERTY(EditAnywhere)
    UUIStatData* UIStat_ShieldHealthScale;
    
    UPROPERTY(EditAnywhere)
    UUIStatData* UIStat_ArmorHealthScale;
    
    UPROPERTY(EditAnywhere)
    UUIStatData* UIStat_ExperienceScale;
    
    UPROPERTY(EditAnywhere)
    UUIStatData* UIStat_CurrencyScale;
    
    UPROPERTY(EditAnywhere)
    UUIStatData* UIStat_LootDropRateScale;
    
    FMayhemCoreSetUIStats();
};

