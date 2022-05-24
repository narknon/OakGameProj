#pragma once
#include "CoreMinimal.h"
#include "MissionObjectiveReferenceWeak.h"
#include "GameFramework/Actor.h"
#include "MissionObserverInterface.h"
#include "UIStatPriorityData.h"
#include "GbxUIFormattedText.h"
#include "UObject/NoExportTypes.h"
#include "OakMissionItem.generated.h"

class UEchoLogData;
class UUIStatData;
class UInventoryBalanceData;
class UOakMissionInventoryBalanceStateComponent;
class UInventoryData;
class AOakInventoryItemPickup;

UCLASS(NotPlaceable, Transient)
class OAKGAME_API AOakMissionItem : public AActor, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMissionObjectiveReferenceWeak ObjectiveRef;
    
    UPROPERTY()
    FText DisplayName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FUIStatPriorityData> UIStats;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    UUIStatData* MissionNameUIStatData;
    
    UPROPERTY(EditAnywhere)
    FGbxUIFormattedText FormattedDisplayName;
    
    UPROPERTY(EditAnywhere)
    bool bHideUntilActivated;
    
    UPROPERTY(EditAnywhere)
    bool bUniquePickup;
    
    UPROPERTY(EditAnywhere)
    bool bCreateWaypoint;
    
    UPROPERTY(EditAnywhere)
    UInventoryBalanceData* LikenessInventoryBalanceData;
    
    UPROPERTY(EditAnywhere)
    int32 LikenessInventoryGameStage;
    
    UPROPERTY(EditAnywhere)
    TArray<UEchoLogData*> EchoLogData;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationInContainer;
    
    UPROPERTY(Export, SkipSerialization, TextExportTransient, Transient, ReplicatedUsing=OnRep_BalanceStateComponent)
    UOakMissionInventoryBalanceStateComponent* BalanceStateComponent;
    
    UPROPERTY(SkipSerialization, TextExportTransient, Transient)
    UInventoryBalanceData* InventoryBalanceData;
    
    UPROPERTY(SkipSerialization, TextExportTransient, Transient)
    UInventoryData* InventoryData;
    
    UPROPERTY(SkipSerialization, TextExportTransient, Transient)
    AOakInventoryItemPickup* Pickup;
    
    AOakMissionItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void OnRep_BalanceStateComponent();
    
    
    // Fix for true pure virtual functions not being implemented
};

