#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "DialogTimeSlotReference.h"
#include "GbxMenuInputEvent.h"
#include "GFxJokeEULA.generated.h"

class UGbxGFxButton;
class UGbxTextField;
class UGbxGFxSlider;
class UGbxGFxObject;

UCLASS()
class OAKGAME_API UGFxJokeEULA : public UGbxGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxSlider* EULAScrollBar;
    
public:
    UPROPERTY(EditAnywhere)
    float ScrollSpeed;
    
    UPROPERTY(EditAnywhere)
    FText MainContent;
    
    UPROPERTY(EditAnywhere)
    FText AcceptButtonText;
    
    UPROPERTY(EditAnywhere)
    FText OtherAcceptButtonText;
    
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference AudioForAutoClose;
    
protected:
    UPROPERTY(Transient)
    UGbxGFxObject* ContentWrapper;
    
    UPROPERTY(Transient)
    UGbxTextField* EULAText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* EULATextMask;
    
    UPROPERTY(Transient)
    UGbxGFxButton* AcceptButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* OtherAcceptButton;
    
public:
    UGFxJokeEULA();
private:
    UFUNCTION()
    void OnSliderPositionUpdate(float SliderPercent) const;
    
protected:
    UFUNCTION()
    void OnEitherAcceptButtonPressed(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void extFinishedHide() const;
    
};

