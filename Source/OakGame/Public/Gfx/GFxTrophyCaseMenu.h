#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "ETrophyCaseViewingState.h"
#include "GFxTrophyCaseMenu.generated.h"

class UGFxTrophyCaseMenuTrophyPanel;
class ATrophyCase;
class UGFxTrophyCaseMenuLargeNavObject;
class ATrophyCaseProxy;
class UChallenge;
class UGFxTrophyCaseMenuSmallNavObject;

UCLASS()
class UGFxTrophyCaseMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<ATrophyCase> TrophyCase;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATrophyCaseProxy> TrophyCaseProxy;
    
    UPROPERTY(Transient)
    ETrophyCaseViewingState CurrentViewingState;
    
    UPROPERTY(Transient)
    FText CachedSetName;
    
    UPROPERTY(Transient)
    int32 CachedSetPercent;
    
    UPROPERTY(Transient)
    bool bMenuContentReady;
    
    UPROPERTY(Transient)
    bool bGameDataReady;
    
    UPROPERTY(Transient)
    UGFxTrophyCaseMenuLargeNavObject* LargeNavClip;
    
    UPROPERTY(Transient)
    UGFxTrophyCaseMenuSmallNavObject* SmallNavClip;
    
    UPROPERTY(Transient)
    UGFxTrophyCaseMenuTrophyPanel* TrophyPanel;
    
public:
    UGFxTrophyCaseMenu();
private:
    UFUNCTION()
    void OnTrophyCaseViewingStateChanged(ETrophyCaseViewingState NewViewingState) const;
    
    UFUNCTION()
    void OnTrophyCaseCurrentTrophySetChanged(const FText& TrophySetName, const FText& TrophySetDescription, int32 NumComplete, int32 NumTotal) const;
    
    UFUNCTION()
    void OnTrophyCaseCurrentTrophyGroupChanged(const FText& TrophyGroupName, const FText& TrophyGroupDescription, int32 NumComplete, int32 NumTotal) const;
    
    UFUNCTION()
    void OnTrophyCaseCurrentTrophyChanged(const FText& TrophyName, const FText& TrophyDescription, bool bLocked, int32 CompletedProgressLevel, int32 MaxProgressLevel, const UChallenge* AssociatedChallenge) const;
    
};

