#pragma once
#include "CoreMinimal.h"
#include "GbxHUDFeedbackManager.generated.h"

class UGbxGFxHUDFeedbackData;
class UGbxGFxMovie;
class AGbxPlayerController;
class APawn;
class APlayerCameraManager;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxHUDFeedbackManager {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxHUDFeedbackData* FeedbackData;
    
private:
    UPROPERTY(Transient)
    TArray<UGbxGFxMovie*> Widgets;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxPlayerController> OwningPlayer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APawn> OwningPawn;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APlayerCameraManager> OwningPlayerCameraManager;
    
public:
    FGbxHUDFeedbackManager();
};

