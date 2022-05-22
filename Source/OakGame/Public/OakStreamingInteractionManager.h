#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MinimalCharacterInfo.h"
#include "OakInteractiveSessionStats.h"
#include "OakStreamingInteractionManager.generated.h"

class UOakStreamingInteractionDirector;
class UOakGameInstance;
class UOakStreamingInteractionGlobals;
class UOakThumbnailManager;
class AStreamingEventDispatcher;
class UUIGlobals;
class AOakPlayerController;
class UOakStreamingInteractionManager;

UCLASS(BlueprintType)
class OAKGAME_API UOakStreamingInteractionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool bMoxxiEventHardCooldown;
    
private:
    UPROPERTY(Transient)
    UOakGameInstance* GameInstance;
    
    UPROPERTY(Transient)
    UOakStreamingInteractionDirector* StreamingInteractionDirector;
    
    UPROPERTY(Transient)
    AStreamingEventDispatcher* StreamingEventDispatcher;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* ThumbnailMgr;
    
    UPROPERTY(Transient)
    TArray<int32> ThumbnailNeededArray;
    
    UPROPERTY(Transient)
    int32 ThumbnailGenerationIdx;
    
    UPROPERTY(Transient)
    TMap<FString, FString> ThumbnailsToSend;
    
    UPROPERTY(Transient)
    UUIGlobals* UIGlobals;
    
    UPROPERTY(Transient)
    UOakStreamingInteractionGlobals* StreamingGlobals;
    
    UPROPERTY(Transient)
    float TimeBetweenCharacterProfileUpdateSteps;
    
    UPROPERTY(Transient)
    float AddedTimeForUpdateStepsDuringEvents;
    
    UPROPERTY(Transient)
    int32 MaxInventoryItemsPerUpdate;
    
    UPROPERTY(Transient)
    float CharacterProfileUpdateTimer;
    
    UPROPERTY(Transient)
    FMinimalCharacterInfo SharedCharacterInfo;
    
    UPROPERTY(Transient)
    bool bIncreasedChanceForSubscribers;
    
    UPROPERTY(Transient)
    int32 UpdateID;
    
    UPROPERTY(Transient)
    int32 InventoryUpdateID;
    
    UPROPERTY(Transient)
    int32 SkillTreeUpdateID;
    
public:
    UOakStreamingInteractionManager();
private:
    UFUNCTION()
    void OnThumbnailLoaded();
    
    UFUNCTION()
    void OnStreamingSessionStatsUpdated(const FOakInteractiveSessionStats& UpdatedSessionStats);
    
public:
    UFUNCTION(BlueprintCallable)
    static UOakStreamingInteractionManager* GetStreamingInteractionManager();
    
    UFUNCTION(BlueprintCallable)
    static void DisplayTimedMessageBPCall(const FText& Title, const FText& Description, const float Duration, AOakPlayerController* OwnerPC);
    
    UFUNCTION(BlueprintCallable)
    static void DebugStartStreamingInteraction();
    
    UFUNCTION(BlueprintCallable)
    static void DebugInitStreamingService(const FString& DebugExtensionClientID);
    
    UFUNCTION(BlueprintCallable)
    static void DebugFakeStreamingEventPoolResult(const FString& EventName, int32 ActionID, int32 ActionValue);
    
    UFUNCTION(BlueprintCallable)
    static void DebugFakeStreamingEvent(const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    static void DebugFakeIsStreaming(bool bFakeIsStreaming);
    
};

