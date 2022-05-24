#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GbxDataAsset.h"
#include "FriendGlobals.generated.h"

class UVaultHunterStatusData;
class UDataTable;
class UChallengeList;

UCLASS(EditInlineNew)
class UFriendGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UChallengeList* AchievementChallengeList;
    
    UPROPERTY(EditAnywhere)
    UDataTable* FriendEventDataTable;
    
public:
    UPROPERTY(EditAnywhere, Export)
    TArray<UVaultHunterStatusData*> VaultHunterStatusTable;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag EnemyTag;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag NamedEnemyTag;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag BossTag;
    
    UPROPERTY(EditDefaultsOnly)
    float Lifetime_Normal;
    
    UPROPERTY(EditDefaultsOnly)
    float Lifetime_Long;
    
    UPROPERTY(EditDefaultsOnly)
    float Lifetime_VeryLong;
    
    UPROPERTY(EditDefaultsOnly)
    float Frequency_VeryLow;
    
    UPROPERTY(EditDefaultsOnly)
    float Frequency_Low;
    
    UPROPERTY(EditDefaultsOnly)
    float Frequency_Normal;
    
    UPROPERTY(EditDefaultsOnly)
    float Frequency_High;
    
    UFriendGlobals();
};

