#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DialogContext.h"
#include "DialogConversation.h"
#include "Engine/LatentActionManager.h"
#include "UObject/NoExportTypes.h"
#include "DialogTimeSlotReference.h"
#include "OnDialogPerformanceNotifyDelegate.h"
#include "OnDialogSequenceFinishedDelegate.h"
#include "EGbxDialogConversationStatus.h"
#include "EDialogDecisionTestResult.h"
#include "GbxDialogBlueprintLibrary.generated.h"

class UDialogNameTag;
class UDialogSelectorFunction;
class UDialogEvent;
class UObject;
class AActor;
class UDialogEnumValue;
class UDialogParameter;
class UDialogTimeSlotData;
class UDialogScriptData;
class UQuietTimePredicate;
class UGbxDialogComponent;
class UDialogPerformanceData;

UCLASS(BlueprintType)
class GBXDIALOG_API UGbxDialogBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxDialogBlueprintLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void WaitForDialog(FDialogConversation Conversation, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool TestDialogSelector(UObject* WorldContextObject, UDialogSelectorFunction* Selector, const FDialogContext& InputParameters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void StopActiveDialog(UObject* Target, bool bIncludeDeathDialog);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetNextDialogPlayerHints(UObject* WorldContextObject, AActor* Actor, UDialogNameTag* NameTag, FVector Location);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetDialogGameCustomizationMetadata(UObject* WorldContextObject, int32 SequenceID, UObject* Object, int32 Cookie);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetDialogFlag(UObject* WorldContextObject, UDialogEnumValue* DialogEnumValue, bool Value, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void SetDialogContextParameter(UPARAM(Ref) FDialogContext& Context, UDialogParameter* Parameter, UObject* ObjectValue, float FloatValue, bool bBoolValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void SetConversationPlayerHints(FDialogConversation Conversation, AActor* Actor, UDialogNameTag* NameTag, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void ResolveDialogTimeSlotReference(FDialogTimeSlotReference Reference, UDialogTimeSlotData*& TimeSlot, UDialogScriptData*& Script);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void PlaceRegionalDialogHold(UObject* WorldContextObject, FName HoldName, FVector Location, float Radius, UQuietTimePredicate* Rules, float Duration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void PlaceGlobalDialogHold(UObject* WorldContextObject, FName HoldName, UQuietTimePredicate* Rules, float Duration);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FDialogConversation NewDialogConversation(UObject* WorldContextObject, AActor* KeyActor, UDialogNameTag* KeySpeakerName, FVector KeyLocation);
    
    UFUNCTION(BlueprintCallable)
    static FDialogContext NewDialogContext();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void InterruptDialogInRadius(UObject* WorldContextObject, FVector Origin, float Radius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void InterruptConversation(FDialogConversation Conversation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool GetDialogFlag(UObject* WorldContextObject, UDialogEnumValue* DialogEnumValue);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetDialogContextParameterSummary(const FDialogContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static void GetDialogContextParameter(const FDialogContext& Context, UDialogParameter* Parameter, UObject*& ObjectValue, float& FloatValue, bool& bBoolValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static EGbxDialogConversationStatus GetConversationStatus(FDialogConversation Conversation);
    
    UFUNCTION(BlueprintCallable)
    static bool FinishTriggerDialog(UObject* WorldContextObject, UDialogEvent* Event, UPARAM(Ref) FDialogContext& Context, FDialogConversation ContinueConversation, FDialogConversation& Conversation, float StartDelay, int32& SequenceID);
    
    UFUNCTION(BlueprintCallable)
    static bool FinishSpeak(UObject* WorldContextObject, const FDialogTimeSlotReference TimeSlotRef, UGbxDialogComponent* OptionalSpeaker, UPARAM(Ref) FDialogContext& Context, FDialogConversation ContinueConversation, FDialogConversation& Conversation, float StartDelay, int32& SequenceID, float OverrideMaxWait);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    static bool FindOrCreateNamedSpeaker(UDialogNameTag* NameTag, bool bIncludePureEchoSpeakers, bool bCreateIfNotFound, UGbxDialogComponent*& Speaker);
    
    UFUNCTION(BlueprintCallable)
    static bool EnqueueDialogPerformance(UObject* WorldContextObject, UGbxDialogComponent* Speaker, UDialogPerformanceData* Performance, float StartDelay, FDialogConversation ContinueConversation, FDialogConversation& Conversation, int32& DialogPlaybackSequence);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DeactivateDialogScript(UObject* WorldContextObject, TSoftObjectPtr<UDialogScriptData> SoftScript, UDialogScriptData* Script);
    
    UFUNCTION(BlueprintPure)
    static EDialogDecisionTestResult ConvertBoolToDialogTestResult(bool bValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void CancelDialogBlockingHold(UObject* WorldContextObject, FName HoldName);
    
    UFUNCTION(BlueprintCallable)
    static void BindToDialogSequenceFinished(UObject* WorldContextObject, int32 PlayingSequenceID, FOnDialogSequenceFinished Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void BindToDialogNotify(UObject* WorldContextObject, int32 PlayingSequenceID, FName NotifyName, FOnDialogPerformanceNotify Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ActivateDialogScript(UObject* WorldContextObject, TSoftObjectPtr<UDialogScriptData> SoftScript, UDialogScriptData* Script);
    
};

