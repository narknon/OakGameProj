#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECSTutorialElement.h"
#include "ECSScoreCondition.h"
#include "Engine/LatentActionManager.h"
#include "CSTutorialBPLib.generated.h"

class UWorld;

UCLASS(BlueprintType)
class UCSTutorialBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCSTutorialBPLib();
    UFUNCTION(BlueprintCallable)
    static void UnblockCSPuzzleIntro();
    
    UFUNCTION(BlueprintCallable)
    static void UnblockCSPuzzleInputs();
    
    UFUNCTION(BlueprintCallable)
    static void StopHighlightCSTutorialElement(ECSTutorialElement TutorialElement);
    
    UFUNCTION(BlueprintCallable)
    static void ShowCSTutorialTooltip(const FString& Tooltip);
    
    UFUNCTION(BlueprintCallable)
    static void ShowCSTutorialElement(ECSTutorialElement TutorialElement);
    
    UFUNCTION(BlueprintCallable)
    static void HighlightCSTutorialElement(ECSTutorialElement TutorialElement);
    
    UFUNCTION(BlueprintCallable)
    static void HideCSTutorialTooltip(const FString& Tooltip);
    
    UFUNCTION(BlueprintCallable)
    static void HideCSTutorialElement(ECSTutorialElement TutorialElement);
    
    UFUNCTION(BlueprintCallable)
    static void CSWaitForScore(UWorld* World, ECSScoreCondition ScoreCondition, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void BlockCSPuzzleIntro();
    
    UFUNCTION(BlueprintCallable)
    static void BlockCSPuzzleInputs();
    
};

