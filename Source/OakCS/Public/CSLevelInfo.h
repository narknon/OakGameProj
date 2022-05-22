#pragma once
#include "CoreMinimal.h"
#include "CSLevelInfo.generated.h"

class UItemPoolData;

USTRUCT(BlueprintType)
struct OAKCS_API FCSLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName NameId;
    
    UPROPERTY(EditDefaultsOnly)
    FString RewardTextureName;
    
    UPROPERTY(EditDefaultsOnly)
    FString CharaterTextureName;
    
    UPROPERTY(EditDefaultsOnly)
    FString CustomizationTextureName;
    
    UPROPERTY()
    FString CharacterAnimName;
    
    UPROPERTY(EditDefaultsOnly)
    FText CharacterName;
    
    UPROPERTY(EditDefaultsOnly)
    FText DifficultyLevel;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Target;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Reward;
    
    UPROPERTY()
    int32 HighestScoreMatchedModifier;
    
    UPROPERTY()
    int32 HighestScoreBeatenModifier;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PuzzleGridHeight;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PuzzleGridWidth;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UItemPoolData> CosmeticRewardItemPoolData;
    
    UPROPERTY(EditDefaultsOnly)
    FText CosmeticRewardCongratulationMessageTitle;
    
    UPROPERTY(EditDefaultsOnly)
    FText CosmeticRewardCongratulationMessageBody;
    
    FCSLevelInfo();
};

