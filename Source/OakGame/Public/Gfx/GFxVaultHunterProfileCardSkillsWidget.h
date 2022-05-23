#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxVaultHunterProfileCardSkillsWidget.generated.h"

class UGbxGFxProgressBar;
class UGbxTextField;

UCLASS(NonTransient)
class UGFxVaultHunterProfileCardSkillsWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* ClassIconClip;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* GreenProgressBarClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* GreenProgressBarIconClip;
    
    UPROPERTY(Transient)
    UGbxTextField* GreenPercentLabelClip;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* BlueProgressBarClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BlueProgressBarIconClip;
    
    UPROPERTY(Transient)
    UGbxTextField* BluePercentLabelClip;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* RedProgressBarClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RedProgressBarIconClip;
    
    UPROPERTY(Transient)
    UGbxTextField* RedPercentLabelClip;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* PurpleProgressBarClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PurpleProgressBarIconClip;
    
    UPROPERTY(Transient)
    UGbxTextField* PurplePercentLabelClip;
    
public:
    UGFxVaultHunterProfileCardSkillsWidget();
};

