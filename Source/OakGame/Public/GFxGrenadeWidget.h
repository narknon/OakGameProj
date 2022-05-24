#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReference.h"
#include "GbxGFxHUDWidget.h"
#include "EGrenadeThrowFailureReason.h"
#include "GFxGrenadeWidget.generated.h"

class UGameResourceData;
class UInventorySlotData;
class UGbxGFxObject;
class AActor;
class UGbxTextField;
class AOakCharacter;

UCLASS()
class UGFxGrenadeWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGameResourceData* GrenadePool;
    
private:
    UPROPERTY(Transient)
    FGameResourcePoolReference CachedResourcePoolRef;
    
    UPROPERTY(Transient)
    FString GrenadeWidgetClipStringID;
    
    UPROPERTY(Transient)
    FString InnerTextClipStringID;
    
    UPROPERTY(Transient)
    FString InnerTextClipContainerStringID;
    
    UPROPERTY(Transient)
    FString InitializationClipID;
    
    UPROPERTY(Transient)
    FString GrenadeIcon_SwapIconToReady;
    
    UPROPERTY(Transient)
    FString GrenadeIcon_SwapIconToEmpty;
    
    UPROPERTY(Transient)
    FString GrenadeIcon_FailedToActivate;
    
    UPROPERTY(Transient)
    FString GrenadeIcon_EmptyToReady;
    
    UPROPERTY(Transient)
    FString GrenadeIcon_ReadyToEmpty;
    
    UPROPERTY(Transient)
    FString GrenadeIcon_ValueChanged;
    
    UPROPERTY(Transient)
    FString DefaultState_WithGrenades;
    
    UPROPERTY(Transient)
    FString DefaultState_WithoutGrenades;
    
    UPROPERTY(Transient)
    FString GrenadeIcon_FailedToActivateNoGrenadesLeft;
    
    UPROPERTY(Transient)
    FString GrenadeIcon_SetIconToDisbaled;
    
    UPROPERTY(Transient)
    FString TextValueChanged;
    
    UPROPERTY(Transient)
    FString GrenadeIcon_InitializationAnim;
    
    UPROPERTY()
    UGbxGFxObject* MainGrenadeClip;
    
    UPROPERTY()
    UGbxGFxObject* TextContainer;
    
    UPROPERTY()
    UGbxTextField* TextClip;
    
public:
    UGFxGrenadeWidget();
protected:
    UFUNCTION()
    void UpdatePoolReferenceHelper() const;
    
public:
    UFUNCTION()
    void UpdateGrenadeValues(FGameResourcePoolReference& ResourcePoolReference) const;
    
protected:
    UFUNCTION()
    void UpdateGrenadeBar(int32 NewGrenadeCount) const;
    
    UFUNCTION()
    void SetGrenadePoolReference(FGameResourcePoolReference& NewGrenadeResourcePoolReference) const;
    
    UFUNCTION()
    void OnNewResourcePoolAdded(FGameResourcePoolReference ResourcePool) const;
    
public:
    UFUNCTION()
    void OnInventoryEquipHasChanged(AActor* ChangedActor, UInventorySlotData* SlotData) const;
    
    UFUNCTION()
    void OnGrenadeThrowFailed(EGrenadeThrowFailureReason FailureReason) const;
    
protected:
    UFUNCTION()
    void OnGrenadeMinMaxValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float MinValue, float MaxValue) const;
    
    UFUNCTION()
    void OnGrenadeCurrentValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float CurrentValue) const;
    
    UFUNCTION()
    void ClearDelegates(AOakCharacter* OldCharacter) const;
    
};

