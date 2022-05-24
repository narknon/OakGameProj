#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxMenuAxisInputEvent.h"
#include "GbxMenuInputListener.h"
#include "EGbxMenuInputDevice.h"
#include "GbxMenuInputEvent.h"
#include "GbxMenuStackMultiCastDelegateDelegate.h"
#include "GbxMenuStackWithMenuDelegateDelegate.h"
#include "Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "GbxMenuStack.generated.h"

class AGbxPlayerController;
class UGbxMenuInput;
class UGbxMenuStackMenuInfo;
class UGbxMenuData;
class UGbxGameInstance;

UCLASS(BlueprintType, Config=Game)
class GBXUI_API UGbxMenuStack : public UObject, public IGbxMenuInputListener {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TWeakObjectPtr<AGbxPlayerController> PCOwner;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxMenuInput> MenuInput;
    
    UPROPERTY(Transient)
    TArray<UGbxMenuStackMenuInfo*> MenuStack;
    
    UPROPERTY(Transient)
    TArray<UGbxMenuStackMenuInfo*> MenuDeleteList;
    
    UPROPERTY(Transient)
    TArray<FGbxMenuInputEvent> QueuedInputActions;
    
    UPROPERTY(Transient)
    TArray<FGbxMenuInputEvent> UnpairedInputCache;
    
    UPROPERTY(Transient)
    TArray<FGbxMenuAxisInputEvent> QueuedAxisInputActions;
    
    UPROPERTY(Transient)
    TArray<UGbxMenuStackMenuInfo*> PopupMenus;
    
    UPROPERTY(Transient)
    int32 PriorityBase;
    
    UPROPERTY(Transient)
    int32 PriorityDelta;
    
    UPROPERTY(Transient)
    int32 PopupMenuPriorityBase;
    
    UPROPERTY(Transient)
    bool bStackHasChanged;
    
    UPROPERTY(Transient)
    bool bIsTicking;
    
    UPROPERTY(Transient)
    bool bIsDoingMenuInit;
    
    UPROPERTY(Transient)
    bool bIsDoingMenuDeinit;
    
    UPROPERTY(Transient)
    bool bIsDoingMenuDeactivate;
    
    UPROPERTY(Config, Transient)
    float AxisAsButtonThreshold;
    
    UPROPERTY(Transient)
    EGbxMenuInputDevice CurrentInputDevice;
    
    UPROPERTY(Transient)
    bool bLastInputFromMouse;
    
    UPROPERTY(Transient)
    int32 BlockAllRawInput;
    
    UPROPERTY(Transient)
    bool bIsProcessingInput;
    
    UPROPERTY(Transient)
    bool bProcessingInputCancelled;
    
    UPROPERTY(Transient)
    bool bStackHidden;
    
    UPROPERTY(Transient)
    FGbxMenuStackMultiCastDelegate OnPrePushMenuDelegate;
    
    UPROPERTY(Transient)
    FGbxMenuStackWithMenuDelegate OnMenuActivatedDelegate;
    
    UPROPERTY(Transient)
    FGbxMenuStackMultiCastDelegate OnStackEmptied;
    
    UPROPERTY()
    TArray<UGbxMenuData*> PassiveMenuLoadQueue;
    
    UPROPERTY()
    UGbxMenuStackMenuInfo* PassiveLoadingMenu;
    
    UPROPERTY(Transient)
    UGbxGameInstance* CachedGameInstance;
    
    UGbxMenuStack();
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    UObject* SwitchTo(UGbxMenuData* MenuData);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockingMode(bool bShouldBlock);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockAllRawInput(bool bShouldBlock);
    
    UFUNCTION(BlueprintCallable)
    UObject* Push(UGbxMenuData* MenuData);
    
    UFUNCTION(BlueprintCallable)
    UObject* PopToSwitchTo(const UObject* Menu, UGbxMenuData* MenuData);
    
    UFUNCTION(BlueprintCallable)
    void PopTo(const UObject* Menu);
    
    UFUNCTION(BlueprintCallable)
    void Pop();
    
    UFUNCTION(BlueprintPure)
    int32 Num() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleRawInput(FKey Key, TEnumAsByte<EInputEvent> EVENTTYPE, int32 ControllerId);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetTopMenu();
    
    UFUNCTION(BlueprintCallable)
    UObject* GetMenuAtIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetIndexOfMenu(const UObject* Menu);
    
    UFUNCTION(BlueprintPure)
    EGbxMenuInputDevice GetCurrentInputDevice() const;
    
    UFUNCTION(BlueprintCallable)
    void Draw();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
    
    // Fix for true pure virtual functions not being implemented
};

