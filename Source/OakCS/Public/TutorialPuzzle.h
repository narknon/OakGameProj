#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TutorialPuzzle.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UTutorialPuzzle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString PuzzleLines;
    
    UPROPERTY(EditAnywhere)
    FString PuzzleGuides;
    
    UPROPERTY(EditAnywhere)
    int32 NumberOfTokens;
    
    UPROPERTY(EditAnywhere)
    int32 ScoringMatchingTile;
    
    UPROPERTY(EditAnywhere)
    float ScoringPerfectAlignment;
    
    UPROPERTY(EditAnywhere)
    int32 ScoringParScore;
    
    UPROPERTY(EditAnywhere)
    int32 ScoringBestScore;
    
    UTutorialPuzzle();
    UFUNCTION(BlueprintImplementableEvent)
    void OnTutorialStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTutorialEnd();
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetTutorialWorld();
    
};

