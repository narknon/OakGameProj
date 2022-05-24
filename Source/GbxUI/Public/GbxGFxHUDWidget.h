#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMovie.h"
#include "EGFxHUDWidgetAnchorType.h"
#include "GbxGFxHUDWidget.generated.h"

class UGbxGFxObject;
class UGbxGFxHUDContainer;
class UGbxGFxHintWidget;
class AGbxPlayerController;
class AGbxHUD;
class APawn;
class UGameInstance;
class UGbxUIGlobals;

UCLASS()
class GBXUI_API UGbxGFxHUDWidget : public UGbxGFxMovie {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGFxHUDWidgetAnchorType AnchorType;
    
    UPROPERTY(EditAnywhere)
    FString LayoutInstanceStringOverride;
    
    UPROPERTY(EditAnywhere)
    FName AnchorBoneName;
    
    UPROPERTY(EditAnywhere)
    float MaxContextSensitivePromptTime;
    
    UPROPERTY(EditAnywhere)
    float MaxTimeUntilStopAdvancing;
    
protected:
    UPROPERTY(EditAnywhere)
    FString ShowFrameName;
    
    UPROPERTY(EditAnywhere)
    FString HideFrameName;
    
    UPROPERTY(EditAnywhere)
    FString OnFrameName;
    
    UPROPERTY(EditAnywhere)
    FString OffFrameName;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ContextSensitivePrompt;
    
    UPROPERTY(Transient)
    FString InstanceString;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxHUD> OwningHUD;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxHUDContainer> OwningHUDContainer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxPlayerController> OwningPC;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APawn> OwningPawn;
    
    UPROPERTY(Transient)
    UGbxGFxObject* IconTransitionWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxObject* InitializationClip;
    
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGameInstance> GameInstanceRef;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxUIGlobals> UIGlobalsRef;
    
protected:
    UPROPERTY(EditAnywhere)
    uint8 bDynamicallyLoaded: 1;
    
public:
    UGbxGFxHUDWidget();
    UFUNCTION()
    void extInitAnimationFinished() const;
    
    UFUNCTION()
    void extHideAnimationFinished() const;
    
};

