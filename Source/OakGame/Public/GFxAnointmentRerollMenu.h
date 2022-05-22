#pragma once
#include "CoreMinimal.h"
#include "AdvancedInteractiveObjectOwnedGFxMenu.h"
#include "GbxMenuInputEvent.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GFxBackpackWidget.h"
#include "OakInventoryMenuFilter.h"
#include "UObject/NoExportTypes.h"
#include "OakInventoryMenuTypePriorityInfo.h"
#include "GFxAnointmentRerollMenu.generated.h"

class UGbxGFxHintWidget;
class UGFxCurrencyCounterClip;
class UGbxTextField;
class UGFxLoadedItemCardBase;
class UGbxGFxObject;
class UOakThumbnailManager;
class UGFxBackpackWidgetItem;
class USwfMovie;
class AOakPlayerController;
class AActor;

UCLASS()
class OAKGAME_API UGFxAnointmentRerollMenu : public UAdvancedInteractiveObjectOwnedGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NavBackpackLeftHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NavBackpackRightHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* DenyHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ConfirmHint;
    
    UPROPERTY(Transient)
    UGFxCurrencyCounterClip* PlayerEridiumCounter;
    
    UPROPERTY(Transient)
    UGbxTextField* InsufficientFundsTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* InsufficientFundsTextShadowClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* InsufficientFundsObj;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackpackClip;
    
    UPROPERTY(Transient)
    TArray<FOakUIInventoryItemDisplayInfo> BackpackDisplayInfoList;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* IconManager;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCardBase* ItemCardBase;
    
    UPROPERTY(Transient)
    UGbxTextField* RerollEridiumCounter;
    
    UPROPERTY(Transient)
    UGFxBackpackWidgetItem* SelectedItem;
    
    UPROPERTY(Transient)
    FGFxBackpackWidget BackpackScrollingList;
    
    UPROPERTY(Transient)
    TArray<FOakInventoryMenuFilter> CurrentFilters;
    
    UPROPERTY(Transient)
    int32 CurrentFilterIndex;
    
public:
    UPROPERTY(EditAnywhere)
    FVector2D BackpackItemCellSize;
    
    UPROPERTY(EditAnywhere)
    int32 VisibleBackpackCellsStandard;
    
    UPROPERTY(EditAnywhere)
    int32 VisibleBackpackCellsSplit;
    
    UPROPERTY(EditAnywhere)
    USwfMovie* ItemCardMovie;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuFilter> PageFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<FOakInventoryMenuTypePriorityInfo> ItemTypeSortPriorities;
    
    UGFxAnointmentRerollMenu();
private:
    UFUNCTION()
    void OnThumbnailLoaded() const;
    
    UFUNCTION()
    void OnSelectedBackpackItemChanged(const FOakUIInventoryItemDisplayInfo& DisplayInfo, UGbxGFxObject* GridWidget) const;
    
    UFUNCTION()
    void OnReRolledInventoryActorReady(AOakPlayerController* ReRolledOwner, AActor* ReRolledInventoryActor) const;
    
    UFUNCTION()
    void OnItemCardReady() const;
    
    UFUNCTION()
    void OnBackpackItemClicked(const FOakUIInventoryItemDisplayInfo& DisplayInfo, UGbxGFxObject* GridWidget, const FGbxMenuInputEvent& InputInfo) const;
    
};

