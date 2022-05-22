#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OakOnlineStatsHelper.generated.h"

class UGameStatData;
class AActor;

UCLASS(EditInlineNew)
class UOakOnlineStatsHelper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<UGameStatData*> ManufacturerStats;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UGameStatData*> GunTypeStats;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* PlaytimeStat;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* SlotMachineWinsStat;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* GuardianRankStat;
    
    UPROPERTY(EditAnywhere)
    UGameStatData* BadassesKilledStat;
    
    UOakOnlineStatsHelper();
    UFUNCTION()
    void OnStatIncrement(AActor* StatContext, UGameStatData* StatId, int32 Amount);
    
};

