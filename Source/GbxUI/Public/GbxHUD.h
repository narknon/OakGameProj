#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GbxHUDStateManager.h"
#include "EGbxMenuInputDevice.h"
#include "GbxHUD.generated.h"

class APawn;
class UGbxHUDData;
class UGbxGFxHUDContainer;
class AGbxPlayerController;
class AGbxCharacter;
class UGbxHUDStateData;

UCLASS(DefaultConfig, NonTransient, Config=GbxUI)
class GBXUI_API AGbxHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FGbxHUDStateManager HudStateManager;
    
public:
    UPROPERTY(Config, EditAnywhere)
    bool bDisplayScaleformHUD;
    
    UPROPERTY(Transient)
    APawn* ChangedFromPawn;
    
    UPROPERTY(Transient)
    UGbxGFxHUDContainer* GFxHUDContainer;
    
    UPROPERTY(Transient)
    UGbxHUDData* OverrideContainerDefinition;
    
private:
    UPROPERTY(Transient)
    EGbxMenuInputDevice CurrentInputDevice;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxPlayerController> OwningPC;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxCharacter> OwningPrimaryCharacter;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APawn> OwningPawn;
    
public:
    AGbxHUD();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SwitchToHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* State);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetHUDContainer(AGbxPlayerController* PlayerController, const UGbxHUDData* ContainerDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PushHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* State, bool bAllowDuplicatePush);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PopToSwitchToHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* PopToState, UGbxHUDStateData* SwitchToState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PopToHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* State);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PopSpecifiedHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* State);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PopHUDState(AGbxPlayerController* PlayerController);
    
protected:
    UFUNCTION()
    void OnPrimaryCharacterChanged(AGbxCharacter* Character);
    
    UFUNCTION()
    void OnPawnChanged(APawn* Pawn, APawn* OldPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void GotoPreviousHUDState(AGbxPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void GotoHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* State);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UGbxHUDStateData* GetCurrentHUDState(AGbxPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ClearToDefaultHUDState(AGbxPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ClearHUDStates(AGbxPlayerController* PlayerController);
    
};

