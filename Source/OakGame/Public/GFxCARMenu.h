#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AdvancedInteractiveObjectOwnedGFxMenu.h"
#include "GFxCARMenuListData.h"
#include "GFxCARMenuPartInfo.h"
#include "EchoDeviceUIController.h"
#include "StandInUIController.h"
#include "OakCARMenuLoadoutCustomizer.h"
#include "EGFxCARMenuPage.h"
#include "OakCARMenuPartType.h"
#include "GFxCARMenuLoadAssetInfo.h"
#include "GFxCARPreviewData.h"
#include "DesiredStandInActorData.h"
#include "GbxMenuInputEvent.h"
#include "UObject/NoExportTypes.h"
#include "GFxCARMenu.generated.h"

class UGFxCarMenuMouseDragArea;
class UUserWidget;
class UOakCARMenuLoadout;
class AOakUIActorContainer;
class UOakCARMenuInteractionInterface;
class IOakCARMenuInteractionInterface;
class UGbxAction_CoordinatedEffect;
class UOakCARVehiclePartStat;
class UVehicleSpawnerComponent;
class AActor;
class UGFxTutorialWidget;
class UGbxTextField;
class UOakCARVehicleData;
class UGbxGFxObject;
class UGFxCARMenuStatCard;
class UGFxCARMenuColorChooserWidget;
class UGbxGFxButton;
class UGbxGFxHintWidget;
class UGFxCARMenuCustomizePanels;
class UOakThumbnailManager;
class UGbxGFxSlider;
class AOakVehicle;
class UGbxGFxPooledGridList;

UCLASS()
class OAKGAME_API UGFxCARMenu : public UAdvancedInteractiveObjectOwnedGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AOakUIActorContainer> VehiclePreviewContainerClass;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> PartFadeOut;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> PartFadeIn;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> SelectePart;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> HoloProjected;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> Intro;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UGbxAction_CoordinatedEffect> Outro;
    
    UPROPERTY(EditAnywhere)
    float CameraInputSpeed;
    
    UPROPERTY(EditAnywhere)
    float CameraInputDamping;
    
    UPROPERTY(EditAnywhere)
    float CameraMinPitch;
    
    UPROPERTY(EditAnywhere)
    float CameraMaxPitch;
    
    UPROPERTY(EditAnywhere)
    bool bAllowRotateCameraInPart;
    
    UPROPERTY(EditAnywhere)
    TArray<FGFxCARMenuPartInfo> PartInfos;
    
    UPROPERTY(EditAnywhere)
    TArray<UOakCARMenuLoadout*> DefaultLoadouts;
    
    UPROPERTY(EditAnywhere)
    TArray<FGFxCARMenuListData> ListDatas;
    
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> TestWidget;
    
    UPROPERTY(EditAnywhere)
    FEchoDeviceUIController EchoDeviceController;
    
    UPROPERTY(EditDefaultsOnly)
    FStandInUIController StandInController;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceMenuName;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceIdleScreenName;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceDeployScreenName;
    
    UPROPERTY(EditAnywhere)
    TArray<UOakCARVehiclePartStat*> StatCardLoadoutStats;
    
    UPROPERTY(EditAnywhere)
    int32 MaxThumbnails;
    
    UPROPERTY(EditAnywhere)
    int32 MaxThumbnailsSplitScreen;
    
    UPROPERTY(EditAnywhere)
    bool bShowDebugPreviewText;
    
    UPROPERTY(EditAnywhere)
    float MouseRotateFactor;
    
private:
    UPROPERTY(Transient)
    TArray<UOakCARMenuLoadout*> Loadouts;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UVehicleSpawnerComponent> PCSpawnerComponent;
    
    UPROPERTY(Transient)
    AActor* VehiclePreviewActor;
    
    UPROPERTY(Transient)
    TScriptInterface<IOakCARMenuInteractionInterface> CARMenuInteraction;
    
    UPROPERTY(Transient)
    int32 CurrentLoadoutIndex;
    
    UPROPERTY(Transient)
    int32 DeployedLoadoutIndex;
    
    UPROPERTY(Transient)
    EGFxCARMenuPage CurrentPage;
    
    UPROPERTY(Transient)
    FOakCARMenuPartType CurrentEditPartType;
    
    UPROPERTY(Transient)
    FOakCARMenuLoadoutCustomizer LoadoutCustomizer;
    
    UPROPERTY(Transient)
    FGFxCARMenuPartInfo NoPartInfo;
    
    UPROPERTY(Transient)
    UGFxTutorialWidget* TutorialWidget;
    
    UPROPERTY(Transient)
    TArray<FGFxCARMenuLoadAssetInfo> LoadedAssets;
    
    UPROPERTY(Transient)
    TArray<UOakCARVehicleData*> NewVehicles;
    
    UPROPERTY(Transient)
    UGbxTextField* DebugLoadoutText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CatchARideMenuClip;
    
    UPROPERTY(Transient)
    UGbxTextField* MenuLabelText;
    
    UPROPERTY(Transient)
    UGFxCARMenuStatCard* StatCard;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavArrowLeftButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NavArrowLeft;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavArrowRightButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NavArrowRight;
    
    UPROPERTY(Transient)
    UGbxTextField* LoadoutNameClip;
    
    UPROPERTY(Transient)
    UGbxTextField* SlotLabelClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PrevLoadoutHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextLoadoutHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* CustomizationHintNextClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* CustomizationHintPrevClip;
    
    UPROPERTY(Transient)
    UGFxCARMenuCustomizePanels* CustomizePanels;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LoadoutOptionsClip;
    
    UPROPERTY(Transient)
    UGFxCARMenuColorChooserWidget* ColorChooserWidget;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DeployAnim;
    
    UPROPERTY(Transient)
    UGbxTextField* DeployText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NewBodyNotification;
    
    UPROPERTY(Transient)
    UGbxTextField* NewBodyHeaderText;
    
    UPROPERTY(Transient)
    UGbxTextField* NewBodyHeaderDsText;
    
    UPROPERTY(Transient)
    UGbxTextField* NewBodyNameText;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* ThumbnailManager;
    
    UPROPERTY(Transient)
    UGFxCarMenuMouseDragArea* MouseDragArea;
    
    UPROPERTY(Transient)
    bool bThumbnailRefreshNeeded;
    
    UPROPERTY(EditAnywhere)
    FText DeployString;
    
    UPROPERTY(EditAnywhere)
    FText NewBodyUnlockedString;
    
public:
    UPROPERTY(Transient)
    UGbxGFxSlider* SharedOptionsListScrollbar;
    
protected:
    UPROPERTY()
    FGFxCARPreviewData LastPreview;
    
    UPROPERTY()
    FGFxCARPreviewData WantedPreview;
    
    UPROPERTY()
    FDesiredStandInActorData StandInPreviewData;
    
public:
    UGFxCARMenu();
protected:
    UFUNCTION()
    void OnVehicleSpawned(AOakVehicle* Vehicle) const;
    
    UFUNCTION()
    void OnTutorialComplete() const;
    
    UFUNCTION()
    void OnTutorialAdvanced() const;
    
    UFUNCTION()
    void OnThumbnailLoaded() const;
    
    UFUNCTION()
    void OnTeleportPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPreviewColorChanged(FColor Color, bool bIsPrimary, int32 Index, bool bIsDefault) const;
    
    UFUNCTION()
    void OnPreviewActorContainerLoaded() const;
    
    UFUNCTION()
    void OnNavButtonPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnLastDeployedPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnColorChosen(FColor Color, bool bIsPrimary, int32 Index, bool bIsDefault) const;
    
    UFUNCTION()
    void OnAssetLoaded() const;
    
    UFUNCTION()
    UGbxGFxPooledGridList* GetPartSelectionList(const FString& ListName) const;
    
    UFUNCTION()
    void extBodyUnlockAnimFinished() const;
    
};

