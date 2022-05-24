#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DistributedSpeakerInfo.h"
#include "DialogSequenceDelegates.h"
#include "DialogBlackboardCounterValueMap.h"
#include "DialogConversation.h"
#include "UObject/NoExportTypes.h"
#include "RecentConversationInfo.h"
#include "RecentDialogPerformanceInfo.h"
#include "DialogBlackboard.generated.h"

class UGbxDialogComponent;
class AActor;
class UDialogNameTag;
class UDialogLookupSystem;
class UDialogScriptData;
class UDialogControlSystem;
class APlayerController;

UCLASS()
class GBXDIALOG_API UDialogBlackboard : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<UDialogNameTag*, FDistributedSpeakerInfo> DistributedSpeakers;
    
    UPROPERTY(Transient)
    TMap<int32, FDialogSequenceDelegates> PlayingSequenceDelegates;
    
    UPROPERTY(Transient)
    UDialogLookupSystem* LookupSystem;
    
    UPROPERTY(Transient)
    UDialogControlSystem* ControlSystem;
    
    UPROPERTY(Export)
    TArray<UGbxDialogComponent*> RegisteredSpeakers;
    
    UPROPERTY()
    TArray<UDialogScriptData*> ActiveScripts;
    
    UPROPERTY()
    TSet<UDialogNameTag*> ActivePureEchoNameTags;
    
    UPROPERTY()
    TMap<UDialogScriptData*, int32> PinnedScriptRefCounts;
    
    UPROPERTY()
    TMap<UObject*, FDialogBlackboardCounterValueMap> CounterValues;
    
private:
    UPROPERTY()
    AActor* PureEchoSpeakerHost;
    
    UPROPERTY(Transient)
    FDialogConversation ConversationForDialogLookup;
    
    UPROPERTY()
    TWeakObjectPtr<APlayerController> SuggestedPlayerForNextConversation;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> SuggestedKeyActorForNextConversation;
    
    UPROPERTY()
    FVector SuggestedKeyLocationForNextConversation;
    
    UPROPERTY()
    TMap<int32, FRecentConversationInfo> RecentConversationInfo;
    
    UPROPERTY(Transient)
    TMap<int32, FRecentDialogPerformanceInfo> RecentPerformances;
    
public:
    UDialogBlackboard();
};

