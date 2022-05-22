#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMovie.h"
#include "GbxHUDFeedbackManager.h"
#include "GbxGFxHUDContainer.generated.h"

class AGbxHUD;
class AGbxPlayerController;
class UGbxGFxHUDWidget;
class UGbxHUDData;
class APawn;

UCLASS()
class GBXUI_API UGbxGFxHUDContainer : public UGbxGFxMovie {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UGbxGFxHUDWidget*> Widgets;
    
    UPROPERTY(Transient)
    UGbxHUDData* HUDData;
    
    UPROPERTY(Transient)
    FGbxHUDFeedbackManager FeedbackManager;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxPlayerController> OwningPC;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxHUD> OwningHUD;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APawn> OwningPawn;
    
    UPROPERTY(Transient)
    bool bViewportNeedsRefresh;
    
    UPROPERTY(Transient)
    bool bFinishedInitializing;
    
public:
    UGbxGFxHUDContainer();
};

