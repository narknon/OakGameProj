#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESpawnPointFilter.h"
#include "GbxParam.h"
#include "SpawnLimitData.generated.h"

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnLimitData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer Tags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer DisallowedTypes;
    
    UPROPERTY(EditAnywhere)
    ESpawnPointFilter TagFilterType;
    
    UPROPERTY(EditAnywhere)
    FGbxParam TotalLimit;
    
    UPROPERTY()
    bool bLimitTotal;
    
    UPROPERTY(EditAnywhere)
    FGbxParam AliveLimit;
    
    UPROPERTY()
    bool bLimitAlive;
    
    UPROPERTY()
    EGameplayContainerMatchType TagMatchType;
    
    FSpawnLimitData();
};

