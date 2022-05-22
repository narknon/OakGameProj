#pragma once
#include "CoreMinimal.h"
#include "OakStreamingInteractionEvent.h"
#include "DialogTimeSlotReference.h"
#include "EnvQueryParams.h"
#include "DonationTier.h"
#include "BitProduct.h"
#include "PollActionInfo.h"
#include "Donator.h"
#include "OakStreamingInteractionEvent_MoxxisDrink.generated.h"

class UStreamerBoosterData;
class AActor;
class UDataTable;
class AStreamerLootableObject;
class UStreamingPoolActionInfo;

UCLASS()
class UOakStreamingInteractionEvent_MoxxisDrink : public UOakStreamingInteractionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText MsgWhenReceivingDonation;
    
    UPROPERTY(EditAnywhere)
    FText DrinkSelectInfo;
    
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference DonationDialog;
    
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference TopTierDonationDialog;
    
    UPROPERTY(EditAnywhere)
    FText FirstDonator;
    
    UPROPERTY(EditAnywhere)
    FText BiggestDonator;
    
    UPROPERTY(EditAnywhere)
    FText LatestDonator;
    
    UPROPERTY(EditAnywhere)
    FText GiveTip;
    
    UPROPERTY(EditAnywhere)
    FText TotalTip;
    
    UPROPERTY(EditAnywhere)
    FText DisplayTip;
    
    UPROPERTY(EditAnywhere)
    FText TipJarTitle;
    
    UPROPERTY(EditAnywhere)
    FText EventInitiatorDesc;
    
    UPROPERTY(EditAnywhere)
    FText EventRunningDesc;
    
    UPROPERTY(EditAnywhere)
    FText EventOverclockText;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> DrinkClass;
    
    UPROPERTY(EditAnywhere)
    FEnvQueryParams DrinkSpawnLocationParams;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSpawnAttempt;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DigistructDuration;
    
    UPROPERTY(EditAnywhere)
    UDataTable* MoxxiEventDataTable;
    
    UPROPERTY(EditAnywhere)
    float MaxEventDuration;
    
    UPROPERTY(EditAnywhere)
    float TimeBetweenEventInfoUpdate;
    
    UPROPERTY()
    float MaximumTimeBetweenDonations;
    
    UPROPERTY(EditAnywhere)
    float DefaultTimeBetweenDonations;
    
    UPROPERTY(EditAnywhere)
    float EventHardCooldownDuration;
    
    UPROPERTY(EditAnywhere)
    TArray<FDonationTier> EventTiers;
    
    UPROPERTY(EditAnywhere)
    TArray<FBitProduct> BitProducts;
    
    UPROPERTY(EditAnywhere)
    UStreamerBoosterData* StreamerBoosterData;
    
    UPROPERTY(EditAnywhere)
    float PollTimerDuration;
    
    UPROPERTY(EditAnywhere)
    int32 MaxItemInPoll;
    
    UPROPERTY(EditAnywhere)
    TArray<FPollActionInfo> PollAvailableActions;
    
    UPROPERTY(EditAnywhere)
    FText PollStarted;
    
    UPROPERTY(EditAnywhere)
    FText PollSelected;
    
    UPROPERTY(EditAnywhere)
    FText PollEnded;
    
private:
    UPROPERTY(Transient)
    UClass* DrinkClassRef;
    
    UPROPERTY(Transient)
    AStreamerLootableObject* MoxxisChestActor;
    
    UPROPERTY(Transient)
    int32 NumberOfDonations;
    
    UPROPERTY(Transient)
    int32 DonationTotalBits;
    
    UPROPERTY(Transient)
    float EndOfDonationTimer;
    
    UPROPERTY(Transient)
    float TierDuration;
    
    UPROPERTY(Transient)
    int64 TierStartedTimestampGame;
    
    UPROPERTY(Transient)
    float HardEventCooldownTimer;
    
    UPROPERTY(Transient)
    bool bDonationDone;
    
    UPROPERTY(Transient)
    FBitProduct MinBitProductToStart;
    
    UPROPERTY(Transient)
    TArray<float> EventTiersBits;
    
    UPROPERTY(Transient)
    TArray<FDonator> Donators;
    
    UPROPERTY(Transient)
    FString LatestDonatorName;
    
public:
    UOakStreamingInteractionEvent_MoxxisDrink();
    UFUNCTION(BlueprintCallable)
    FString GetSelectionTextByClass(TSoftClassPtr<UStreamingPoolActionInfo> PollActionClass, int32 Rank, int32 Tier, int32 Percent);
    
    UFUNCTION(BlueprintCallable)
    void FakeSpawnMoxxisDrink();
    
    UFUNCTION(BlueprintCallable)
    void FakeMoxxisDrinkAction(TSoftClassPtr<UStreamingPoolActionInfo> PollActionClass, float ActionValue);
    
};

