#pragma once
#include "CoreMinimal.h"
#include "DebugPuzzle.generated.h"

USTRUCT(BlueprintType)
struct FDebugPuzzle {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString PuzzleLines;
    
    UPROPERTY(EditDefaultsOnly)
    FString PuzzleGuides;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumberOfTokens;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScoringMatchingTile;
    
    UPROPERTY(EditDefaultsOnly)
    float ScoringPerfectAlignment;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScoringParScore;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ScoringBestScore;
    
    OAKCS_API FDebugPuzzle();
};

