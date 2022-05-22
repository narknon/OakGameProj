#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxMenuTutorialSequence.h"
#include "GFxMenuTutorialTintClipData.h"
#include "EGbxMenuInputDevice.h"
#include "GFxTutorialWidget.generated.h"

class UGFxTutorialDialogWidget;

UCLASS(NonTransient)
class OAKGAME_API UGFxTutorialWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FGFxMenuTutorialSequence TutorialSequence;
    
    UPROPERTY(Transient)
    int32 TutorialSequenceReadPosition;
    
    UPROPERTY(Transient)
    bool bIsTutorialActive;
    
    UPROPERTY(Transient)
    bool bAdvanceOnKeyPress;
    
    UPROPERTY(Transient)
    bool bAllowTutorialSkip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* InnerClip;
    
    UPROPERTY(Transient)
    UGFxTutorialDialogWidget* LargeDialogWidget;
    
    UPROPERTY(Transient)
    UGFxTutorialDialogWidget* MediumDialogWidget;
    
    UPROPERTY(Transient)
    UGFxTutorialDialogWidget* SmallDialogWidget;
    
    UPROPERTY(Transient)
    UGFxTutorialDialogWidget* CurrentDialogWidget;
    
    UPROPERTY(Transient)
    TArray<FGFxMenuTutorialTintClipData> TintClips;
    
    UPROPERTY(Transient)
    FName CurrentlyPlayingTutorial;
    
    UPROPERTY(Transient)
    FText CachedHeaderText;
    
    UPROPERTY(Transient)
    FText CachedBodyText;
    
public:
    UGFxTutorialWidget();
    UFUNCTION()
    void OnInputDeviceChanged(const EGbxMenuInputDevice NewInputDevice);
    
};

