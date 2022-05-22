#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxHUDWidget.h"
#include "EGFxChallegeProgressWidgetState.h"
#include "GFxChallengeProgressItem.h"
#include "GFxChallengeProgressWidget.generated.h"

class UChallengesComponent;
class UGbxGFxObject;
class AChallengeManager;
class UGbxTextField;
class UGbxGFxProgressBar;
class UChallenge;

UCLASS()
class OAKGAME_API UGFxChallengeProgressWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float WidgetDuration;
    
    UPROPERTY(EditAnywhere)
    float DelayToThingTransitions;
    
    UPROPERTY(EditAnywhere)
    float MaxWidgetRolloutTime;
    
    UPROPERTY(EditAnywhere)
    FText ChallengeCompleteText;
    
    UPROPERTY(Transient)
    EGFxChallegeProgressWidgetState WidgetState;
    
    UPROPERTY(Transient)
    FGFxChallengeProgressItem CurrentChallenge;
    
    UPROPERTY(Transient)
    float WidgetStateTime;
    
    UPROPERTY(Transient)
    bool bHasStartedThingTransitions;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AChallengeManager> ChallengeManager;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UChallengesComponent> ChallengesComponent;
    
    UPROPERTY(Transient)
    UGbxGFxObject* WidgetWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxObject* Widget;
    
    UPROPERTY(Transient)
    UGbxTextField* LabelText;
    
    UPROPERTY(Transient)
    UGbxTextField* BodyText;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* ProgressBarClip;
    
    UPROPERTY(Transient)
    UGbxTextField* ProgressText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* TypeIconClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ScanlinesClip;
    
    UPROPERTY(Transient)
    TArray<FGFxChallengeProgressItem> ChallengesQueue;
    
    UPROPERTY(Transient)
    bool bBlockedByTutorial;
    
public:
    UGFxChallengeProgressWidget();
private:
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
    UFUNCTION()
    void OnChallengeUpdated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass, int32 NewValue, bool bDisplayNotification, bool bCompleted) const;
    
    UFUNCTION()
    void OnChallengeCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) const;
    
    UFUNCTION()
    void OnChallengeChildCompleted(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) const;
    
    UFUNCTION()
    void OnChallengeActivated(UChallengesComponent* Component, TSubclassOf<UChallenge> ChallengeClass) const;
    
    UFUNCTION()
    void extOnUpdateThingComplete(const FString& Thing) const;
    
    UFUNCTION()
    void extOnUpdateThing(const FString& Thing) const;
    
    UFUNCTION()
    void extOnRolloutComplete() const;
    
    UFUNCTION()
    void extOnRollOnComplete() const;
    
};

