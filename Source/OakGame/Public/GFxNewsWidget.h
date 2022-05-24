#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "Engine/EngineTypes.h"
#include "Transition.h"
#include "GFxNewsWidget.generated.h"

class UGFxNewsWidgetNavCircles;
class UGFxNewsItem;
class UGbxGFxObject;
class UGbxTextField;

UCLASS(NonTransient)
class UGFxNewsWidget : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bIsCurrentlyHovered;
    
    UPROPERTY(Transient)
    bool bIsCurrentlyFocused;
    
    UPROPERTY(Transient)
    float UnhoverTimeoutSeconds;
    
    UPROPERTY(Transient)
    FTimerHandle UnhoveredTimerHandle;
    
    UPROPERTY(Transient)
    bool bIsHoveredByArrowButton;
    
    UPROPERTY(Transient)
    bool bIsHoveredBySelf;
    
    UPROPERTY(Transient)
    UGFxNewsWidgetNavCircles* NavigationDots;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NewsContainer;
    
    UPROPERTY(Transient)
    FTransition LeftToRight;
    
    UPROPERTY(Transient)
    FTransition RightToLeft;
    
    UPROPERTY(Transient)
    UGbxTextField* NewsHint;
    
    UPROPERTY(Transient)
    TArray<UGFxNewsItem*> NewsItemClips;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxButton> NavLeftButton;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxButton> NavRightButton;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxObject> VisibilityClip;
    
    UPROPERTY(Transient)
    bool bVisibilityClipIsVisible;
    
public:
    UGFxNewsWidget();
private:
    UFUNCTION()
    void OnUnhoverTimeout();
    
};

