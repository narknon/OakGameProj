#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameStat.h"
#include "GameStatsComponent.generated.h"

class UGameStatChannel;
class UGameStatData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGameStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<FGameStat> GameStats;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGameStatChannel> GameStatChannel;
    
public:
    UGameStatsComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateStat(UGameStatData* GameStat, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void IncrementStat(UGameStatData* GameStat, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatValue(UGameStatData* GameStat);
    
    UFUNCTION()
    TArray<FGameStat> GetGameStats() const;
    
};

