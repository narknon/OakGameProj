#pragma once
#include "CoreMinimal.h"
#include "EEdgeFlashType.h"
#include "GbxGFxObject.h"
#include "NameplateBarData.h"
#include "ENameplateStyle.h"
#include "ETargetedNameplateState.h"
#include "ETargetedNameplateType.h"
#include "GFxNameplate.generated.h"

class UGbxGFxProgressBar;
class UGbxTextField;
class UCurveFloat;
class UDamageComponent;
class UTeam;
class UNameplateInfoProviderInterface;
class INameplateInfoProviderInterface;
class UTeamComponent;
class AGbxCharacter;

UCLASS(NonTransient)
class OAKGAME_API UGFxNameplate : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText LevelPrefix;
    
    UPROPERTY(Transient)
    EEdgeFlashType BarsFlashType;
    
    UPROPERTY(Transient)
    UGbxGFxObject* OverLevelIconPlacement;
    
    UPROPERTY()
    UGbxGFxObject* OverLevelIcon;
    
    UPROPERTY()
    UGbxGFxObject* NameTextContainer;
    
    UPROPERTY()
    UGbxGFxObject* NameplateBarsContainer;
    
    UPROPERTY()
    UGbxGFxProgressBar* BarPrimary;
    
    UPROPERTY()
    UGbxGFxProgressBar* BarSecondary;
    
    UPROPERTY()
    UGbxGFxProgressBar* BarTertiary;
    
    UPROPERTY()
    UGbxTextField* LevelText;
    
    UPROPERTY()
    UGbxTextField* CenteredNameText;
    
    UPROPERTY()
    UGbxTextField* LeftNameText;
    
    UPROPERTY()
    FNameplateBarData NameplateDataArray[3];
    
    UPROPERTY(Transient)
    UCurveFloat* RangeFadeCurve;
    
    UPROPERTY(Transient)
    float FadeStartDistance;
    
    UPROPERTY(Transient)
    float FadeEndDistance;
    
    UPROPERTY(Transient)
    float BracketFadeCooldown;
    
    UPROPERTY()
    TScriptInterface<INameplateInfoProviderInterface> CurrentTarget;
    
    UPROPERTY(Export)
    UDamageComponent* CurrentTargetDamageComponent;
    
    UPROPERTY()
    FText EnemyName;
    
    UPROPERTY()
    ENameplateStyle NameplateStyle;
    
    UPROPERTY()
    ETargetedNameplateType DesiredTargetedNameplateType;
    
    UPROPERTY()
    ETargetedNameplateState TargetedNameplateState;
    
    UPROPERTY()
    FString TargetTextMarkupString;
    
    UPROPERTY(Transient)
    FString ImmuneClipID;
    
    UPROPERTY(Transient)
    FString ImmuneAnimation;
    
    UPROPERTY(Transient)
    FString StopAnimationFrame;
    
    UGFxNameplate();
    UFUNCTION()
    void OnTeamUpdated(UTeamComponent* NewTeam, UTeam* OldTeam);
    
    UFUNCTION()
    void OnPrimaryCharacterChanged(AGbxCharacter* Character);
    
    UFUNCTION()
    void OnOwningPlayerLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
    UFUNCTION()
    void OnNameUpdated();
    
    UFUNCTION()
    void OnLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
    UFUNCTION()
    TScriptInterface<INameplateInfoProviderInterface> GetTargetInterface();
    
    UFUNCTION()
    void ForceUpdateFocusableBars();
    
    UFUNCTION()
    void extDeathAnimComplete();
    
    UFUNCTION()
    void AnimateBar(int32 Index, const FString& AnimationToPlay);
    
};

