#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameStatsManager.generated.h"

class UGameStatData;

UCLASS(NotPlaceable, Transient)
class GBXGAMESYSTEMCORE_API AGameStatsManager : public AActor {
    GENERATED_BODY()
public:
    AGameStatsManager();
    UFUNCTION(BlueprintCallable)
    void UpdateStat(AActor* StatContext, UGameStatData* GameStat, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void IncrementStat(AActor* StatContext, UGameStatData* GameStat, int32 IncrementAmount);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatValue(AActor* StatContext, UGameStatData* GameStat);
    
};

