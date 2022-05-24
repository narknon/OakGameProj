#pragma once
#include "CoreMinimal.h"
#include "EInventoryAspectUsagePriority.h"
#include "GbxDataAsset.h"
#include "InventoryAspectData.generated.h"

class UInventoryBalanceStateComponent;
class AActor;

UCLASS(Abstract, Blueprintable, Const, EditInlineNew)
class GBXINVENTORY_API UInventoryAspectData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EInventoryAspectUsagePriority Priority;
    
public:
    UInventoryAspectData();
    UFUNCTION(BlueprintNativeEvent)
    void K2_OnBeginPlay(AActor* InventoryActor, const UInventoryBalanceStateComponent* InventoryBalanceState) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void K2_OnApplyAspect(AActor* InventoryActor, const UInventoryBalanceStateComponent* InventoryBalanceState) const;
    
    UFUNCTION(BlueprintNativeEvent)
    FString K2_GetFriendlyDescription() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void K2_CloneAppearance(AActor* CloneActor, AActor* InventoryActor, const UInventoryBalanceStateComponent* InventoryBalanceState) const;
    
};

