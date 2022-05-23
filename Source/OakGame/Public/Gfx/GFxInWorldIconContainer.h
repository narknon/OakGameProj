#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "MissionIconObserverInterface.h"
#include "HUDInWorldIconTargetInfo.h"
#include "UObject/NoExportTypes.h"
#include "MissionObserverInterface.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GFxInWorldIconContainer.generated.h"

class UInWorldIconData;
class UGbxGFxObject;
class UGFxInWorldIcon;
class UGFxOverheadNameplate;
class AGbxCharacter;
class AActor;
class UPlayerAlertData;
class AOakPlayerState;

UCLASS(Blueprintable)
class UGFxInWorldIconContainer : public UGbxGFxHUDWidget, public IMissionIconObserverInterface, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* OverheadNameplateIconData;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* CustomWaypointIconData;
    
    UPROPERTY(EditAnywhere)
    float SplitscreenOffset;
    
    UPROPERTY(EditAnywhere)
    float MinSplitscreenYValue;
    
    UPROPERTY(EditAnywhere)
    float MaxTopPlayerSplitscreenYValue;
    
    UPROPERTY(EditAnywhere)
    float IconSnapThreshold;
    
    UPROPERTY(EditAnywhere)
    float SmoothTransitionDuration;
    
    UPROPERTY(Transient)
    int32 NextIconInstId;
    
private:
    UPROPERTY()
    FTimerHandle TimerHandle_RegisterNameplates;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ContainerObject;
    
    UPROPERTY(Transient)
    FVector2D ContainerSize;
    
    UPROPERTY(Transient)
    FVector2D ContainerOrigin;
    
    UPROPERTY(Transient)
    FHUDInWorldIconTargetInfo CurrentPetTargetInfo;
    
    UPROPERTY(EditDefaultsOnly)
    float RangeCutoff;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContainerOriginStandard;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContainerOriginSplit;
    
    UPROPERTY(EditAnywhere)
    float MaxTransitionToMapTime;
    
    UPROPERTY()
    TArray<UGFxInWorldIcon*> ActiveIcons;
    
    UPROPERTY(Transient)
    UGFxOverheadNameplate* PetNameplate;
    
    UPROPERTY(Transient)
    bool bNeedRefreshTrackedMissionIcons;
    
public:
    UGFxInWorldIconContainer();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnregisterTarget(const FHUDInWorldIconTargetInfo& TargetInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RegisterTarget(const FHUDInWorldIconTargetInfo& TargetInfo) const;
    
    UFUNCTION()
    void OnRemovePlayerAlert(const FUniqueNetIdRepl& Instigator) const;
    
private:
    UFUNCTION()
    void OnPrimaryCharacterChanged(AGbxCharacter* NewPrimaryCharacter) const;
    
    UFUNCTION()
    void OnPetRenamed(const FText& NewName) const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnIconRemoved(UGFxInWorldIcon* Icon) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnIconAdded(UGFxInWorldIcon* Icon) const;
    
    UFUNCTION()
    void OnCreatePlayerAlert(const FUniqueNetIdRepl& Instigator, AActor* Actor, FVector AlertLocation, const UPlayerAlertData* AlertData) const;
    
    UFUNCTION()
    void AddNewNameplateForPlayerState(AOakPlayerState* NewPlayerState) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

