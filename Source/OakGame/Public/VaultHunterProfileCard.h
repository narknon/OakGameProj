#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "VaultHunterProfileCard.generated.h"

class UChallengeCategoryData;

UCLASS()
class UVaultHunterProfileCard : public UGbxDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<UChallengeCategoryData*> GameCompletionChallengeListGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<UChallengeCategoryData*> EnemyChallengeListGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<UChallengeCategoryData*> WeaponChallengeListGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<UChallengeCategoryData*> CrewChallengeListGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<UChallengeCategoryData*> ExplorationChallengeListGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<UChallengeCategoryData*> SlaugherChallengeListGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<UChallengeCategoryData*> RaidChallengeListGroups;
    
    UPROPERTY(EditAnywhere)
    TArray<UChallengeCategoryData*> ProvingGroundChallengeListGroups;
    
public:
    UVaultHunterProfileCard();
};

