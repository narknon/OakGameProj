#pragma once
#include "CoreMinimal.h"
#include "PlaythroughSelectionModeEntry.generated.h"

USTRUCT(BlueprintType)
struct FPlaythroughSelectionModeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText ModeName;
    
    UPROPERTY(EditAnywhere)
    FText ModeDescription;
    
    UPROPERTY(EditAnywhere)
    FString ModeFrameName;
    
    UPROPERTY(EditAnywhere)
    int32 PlaythroughNum;
    
    UPROPERTY(EditAnywhere)
    FName ModeSelectionSound;
    
    OAKGAME_API FPlaythroughSelectionModeEntry();
};

