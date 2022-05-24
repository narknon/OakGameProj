#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "DebugPuzzle.h"
#include "CSGlobals.generated.h"

class UTutorialPuzzle;
class UInventoryCategoryData;
class UOakCustomizationData;
class UCSLevelData;
class UBoosterData;

UCLASS()
class OAKCS_API UCSGlobals : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UInventoryCategoryData* CSBucksInventoryType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakCustomizationData*> SkinRewards;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UOakCustomizationData*> HeadRewards;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HighScoreMatchedModifier;
    
    UPROPERTY(EditDefaultsOnly)
    int32 HighScoreBeatenModifier;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FDebugPuzzle> DebugPuzzles;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UTutorialPuzzle>> TutorialPuzzle;
    
    UPROPERTY(EditDefaultsOnly)
    UCSLevelData* LevelData;
    
    UPROPERTY(EditDefaultsOnly)
    UBoosterData* BoosterData;
    
    UPROPERTY(EditDefaultsOnly)
    FText ShiftAccountRequiredTitle;
    
    UPROPERTY(EditDefaultsOnly)
    FText ShiftAccountRequiredText;
    
    UPROPERTY(EditDefaultsOnly)
    FText SubmitPuzzleErrorTitle;
    
    UPROPERTY(EditDefaultsOnly)
    FText SubmitPuzzleErrorText;
    
    UPROPERTY(EditDefaultsOnly)
    FText GetPuzzleErrorTitle;
    
    UPROPERTY(EditDefaultsOnly)
    FText GetPuzzleErrorText;
    
    UPROPERTY(EditDefaultsOnly)
    FText BuyBoosterMessageTitle;
    
    UPROPERTY(EditDefaultsOnly)
    FText BuyBoosterMessageText;
    
    UPROPERTY(EditDefaultsOnly)
    FText OverrideBoosterMessageTitle;
    
    UPROPERTY(EditDefaultsOnly)
    FText OverrideBoosterMessageText;
    
    UPROPERTY(EditDefaultsOnly)
    FText QuitPuzzleMessageTitle;
    
    UPROPERTY(EditDefaultsOnly)
    FText QuitPuzzleMessageBody;
    
    UPROPERTY(EditDefaultsOnly)
    FText QuickPassMessageTitle;
    
    UPROPERTY(EditDefaultsOnly)
    FText QuickPassMessageText;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FText> DidYouKnowMessages;
    
    UCSGlobals();
};

