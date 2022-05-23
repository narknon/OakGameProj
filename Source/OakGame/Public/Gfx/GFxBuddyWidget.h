#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxObject.h"
#include "EBuddyWidgetFanfareState.h"
#include "EExitDownStateReason.h"
#include "EBuddyWidgetState.h"
#include "GFxBuddyWidget.generated.h"

class UGbxGFxProgressBar;
class UNameplateInfoProviderInterface;
class INameplateInfoProviderInterface;
class AActor;

UCLASS(NonTransient)
class OAKGAME_API UGFxBuddyWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxObject* WidgetAnims;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* HealthBar;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* ShieldBar;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* ReviveBar;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* DyingBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* GodRay;
    
    UPROPERTY(Transient)
    TScriptInterface<INameplateInfoProviderInterface> CurrentTarget;
    
    UPROPERTY(Transient)
    AActor* CurrentTargetActor;
    
    UPROPERTY(Transient)
    TSubclassOf<AActor> CurrentTargetClass;
    
    UPROPERTY(Transient)
    EBuddyWidgetState CachedBuddyWidgetState;
    
    UPROPERTY(Transient)
    EBuddyWidgetFanfareState CachedFanfareState;
    
    UPROPERTY(Transient)
    FString InstanceName;
    
    UGFxBuddyWidget();
protected:
    UFUNCTION()
    void OnPlayerClassChanged();
    
    UFUNCTION()
    void OnLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
    UFUNCTION()
    void OnDownStateExitReasonChanged(EExitDownStateReason ExitReason);
    
};

