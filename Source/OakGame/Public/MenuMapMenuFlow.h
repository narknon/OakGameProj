#pragma once
#include "CoreMinimal.h"
#include "MainMenuCameraViewpointGroup.h"
#include "MenuMapPlaythroughChangedDelegateDelegate.h"
#include "GameFramework/Actor.h"
#include "MainMenuViewpointChangedDelegateDelegate.h"
#include "MenuMapMenuFlowDelegateDelegate.h"
#include "MenuMapOnUIGroupModeChangedDelegate.h"
#include "MenuMapOnDifficultyChangedDelegate.h"
#include "EMainMenuViewpointType.h"
#include "EInitialPlayerStatus.h"
#include "EMenuTransition.h"
#include "MenuMapMenuFlow.generated.h"

class UGbxMenuData;
class UMenuMapCameraData;
class AOakPlayerController;
class UObject;
class UGFxOakLegalScreenMenu;

UCLASS()
class OAKGAME_API AMenuMapMenuFlow : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMainMenuViewpointChangedDelegate OnViewpointChanged;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGbxMenuData* MainMenuMenuData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGbxMenuData* TitleScreenMenuData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGbxMenuData* LegalScreenMenuData;
    
    UPROPERTY(BlueprintAssignable)
    FMenuMapMenuFlowDelegate LegalScreenCompleted;
    
    UPROPERTY(EditInstanceOnly)
    int32 SecondsBetweenClaptrapSkits;
    
    UPROPERTY(EditAnywhere)
    UMenuMapCameraData* CameraData;
    
    UPROPERTY(EditInstanceOnly)
    FMainMenuCameraViewpointGroup CameraViewpoints[7];
    
    UPROPERTY(BlueprintAssignable)
    FMenuMapPlaythroughChangedDelegate PlayThroughChanged;
    
    UPROPERTY(BlueprintAssignable)
    FMenuMapOnUIGroupModeChanged UIGroupModeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FMenuMapOnDifficultyChanged DifficultyChanged;
    
private:
    UPROPERTY(Transient)
    AOakPlayerController* OakPlayerController;
    
    UPROPERTY(Transient)
    UGbxMenuData* NextMenuData;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    EMainMenuViewpointType CurrentViewpointType;
    
public:
    AMenuMapMenuFlow();
    UFUNCTION(BlueprintCallable)
    void Start(TEnumAsByte<EInitialPlayerStatus::Type>& OutInitialPlayerStatus);
    
    UFUNCTION(BlueprintCallable)
    void ShowLegalScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnWorldTransitionCompleted();
    
private:
    UFUNCTION()
    void OnPlayerControllerLogIn(AOakPlayerController* InOakPlayerController);
    
    UFUNCTION()
    void OnMenuTransitionOutCompleted(EMenuTransition InMenuTransition, UGbxMenuData* InNextMenuData);
    
    UFUNCTION()
    void OnMenuStackPush(UObject* InMenuPushed);
    
    UFUNCTION()
    void OnLegalScreenCompleted(const UGFxOakLegalScreenMenu* LegalScreenMenu);
    
};

