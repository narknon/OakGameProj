#pragma once
#include "CoreMinimal.h"
#include "MinimalInventoryInfo.h"
#include "OakStreamingInteractionEvent.h"
#include "OakThumbnailManagerConfig.h"
#include "LootableEventResultItem.h"
#include "OakStreamingInteractionEvent_Lootable.generated.h"

class UUIGlobals;
class ULootableBalanceData;
class UOakThumbnailManager;
class UInventoryCategoryData;
class USpawnerComponent;
class AActor;
class ALootableObject;

UCLASS()
class UOakStreamingInteractionEvent_Lootable : public UOakStreamingInteractionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<ULootableBalanceData>> LootableFilterBalanceData;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UInventoryCategoryData>> AcceptedItemCategories;
    
    UPROPERTY(EditAnywhere)
    float SweepstakesDuration;
    
    UPROPERTY(EditAnywhere)
    float PrizeSelectionDuration;
    
    UPROPERTY(EditAnywhere)
    float FallbackTimerAdditionalTime;
    
    UPROPERTY(EditAnywhere)
    FText PrizeSelectionWin;
    
    UPROPERTY(EditAnywhere)
    FText PrizeSelectionLose;
    
    UPROPERTY(EditAnywhere)
    FText PrizeSelectionTimeout;
    
    UPROPERTY(EditAnywhere)
    FText PrizeSelectionSent;
    
    UPROPERTY(EditAnywhere)
    FText PrizeSelectionEnd;
    
    UPROPERTY(EditAnywhere)
    bool bEnabledInGearUpGameMode;
    
    UPROPERTY(EditDefaultsOnly)
    FOakThumbnailManagerConfig ThumbnailMgrConfig;
    
protected:
    UPROPERTY(Transient)
    TArray<FLootableEventResultItem> LootItems;
    
    UPROPERTY(Transient)
    UUIGlobals* UIGlobals;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* ThumbnailMgr;
    
    UPROPERTY(Transient)
    TArray<FMinimalInventoryInfo> ThumbnailInfo;
    
    UPROPERTY(Transient)
    int32 ThumbnailGenerationIdx;
    
public:
    UOakStreamingInteractionEvent_Lootable();
protected:
    UFUNCTION()
    void OnThumbnailLoaded();
    
public:
    UFUNCTION()
    void OnLootableSpawned(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
    UFUNCTION()
    void OnLootableObjectEventOpened(ALootableObject* LootableObject);
    
    UFUNCTION()
    void OnLootableDied(USpawnerComponent* SpawnerComponent, AActor* Actor);
    
};

