#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EEventTriggerType.h"
#include "DialogTimeSlotReference.h"
#include "EEndEventReasons.h"
#include "OakStreamingInteractionEvent.generated.h"

class UOakStreamingInteractionManager;
class UDialogScriptData;

UCLASS(Abstract, BlueprintType)
class UOakStreamingInteractionEvent : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString EVENTTYPE;
    
    UPROPERTY(EditAnywhere)
    EEventTriggerType EventTriggerType;
    
    UPROPERTY(EditAnywhere)
    float EventCooldownTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText EventTitle;
    
    UPROPERTY(EditAnywhere)
    FText EventDescription;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDialogScriptData> EventScript;
    
    UPROPERTY(EditAnywhere)
    FText BeginEventMessage;
    
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference BeginEventDialog;
    
    UPROPERTY(EditAnywhere)
    FText EndEventMessage;
    
    UPROPERTY(EditAnywhere)
    FDialogTimeSlotReference EndEventDialog;
    
    UPROPERTY()
    float FallbackTimerDuration;
    
    UPROPERTY()
    float FallbackTimer;
    
    UPROPERTY(Transient)
    int64 InitializeTimestamp;
    
    UPROPERTY(Transient)
    int64 LastActivationTimestamp;
    
    UPROPERTY(Transient)
    int64 EventStartedTimestampEBS;
    
    UPROPERTY(Transient)
    bool bBackendAcknowledged;
    
    UPROPERTY(Transient)
    uint32 EventID;
    
    UPROPERTY(Transient)
    EEndEventReasons EndEventReason;
    
protected:
    UPROPERTY(Transient)
    UOakStreamingInteractionManager* StreamingMgr;
    
public:
    UOakStreamingInteractionEvent();
protected:
    UFUNCTION()
    void EndEventFallback();
    
};

