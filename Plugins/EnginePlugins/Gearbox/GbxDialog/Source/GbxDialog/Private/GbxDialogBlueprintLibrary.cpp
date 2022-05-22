#include "GbxDialogBlueprintLibrary.h"

class UDialogEvent;
class UObject;
class UDialogNameTag;
class UDialogSelectorFunction;
class AActor;
class UDialogEnumValue;
class UDialogParameter;
class UDialogTimeSlotData;
class UDialogScriptData;
class UQuietTimePredicate;
class UGbxDialogComponent;
class UDialogPerformanceData;

void UGbxDialogBlueprintLibrary::WaitForDialog(FDialogConversation Conversation, FLatentActionInfo LatentInfo) {
}

bool UGbxDialogBlueprintLibrary::TestDialogSelector(UObject* WorldContextObject, UDialogSelectorFunction* Selector, const FDialogContext& InputParameters) {
    return false;
}

void UGbxDialogBlueprintLibrary::StopActiveDialog(UObject* Target, bool bIncludeDeathDialog) {
}

void UGbxDialogBlueprintLibrary::SetNextDialogPlayerHints(UObject* WorldContextObject, AActor* Actor, UDialogNameTag* NameTag, FVector Location) {
}

void UGbxDialogBlueprintLibrary::SetDialogGameCustomizationMetadata(UObject* WorldContextObject, int32 SequenceID, UObject* Object, int32 Cookie) {
}

void UGbxDialogBlueprintLibrary::SetDialogFlag(UObject* WorldContextObject, UDialogEnumValue* DialogEnumValue, bool Value, float Duration) {
}

void UGbxDialogBlueprintLibrary::SetDialogContextParameter(FDialogContext& Context, UDialogParameter* Parameter, UObject* ObjectValue, float FloatValue, bool bBoolValue) {
}

void UGbxDialogBlueprintLibrary::SetConversationPlayerHints(FDialogConversation Conversation, AActor* Actor, UDialogNameTag* NameTag, FVector Location) {
}

void UGbxDialogBlueprintLibrary::ResolveDialogTimeSlotReference(FDialogTimeSlotReference Reference, UDialogTimeSlotData*& TimeSlot, UDialogScriptData*& Script) {
}

void UGbxDialogBlueprintLibrary::PlaceRegionalDialogHold(UObject* WorldContextObject, FName HoldName, FVector Location, float Radius, UQuietTimePredicate* Rules, float Duration) {
}

void UGbxDialogBlueprintLibrary::PlaceGlobalDialogHold(UObject* WorldContextObject, FName HoldName, UQuietTimePredicate* Rules, float Duration) {
}

FDialogConversation UGbxDialogBlueprintLibrary::NewDialogConversation(UObject* WorldContextObject, AActor* KeyActor, UDialogNameTag* KeySpeakerName, FVector KeyLocation) {
    return FDialogConversation{};
}

FDialogContext UGbxDialogBlueprintLibrary::NewDialogContext() {
    return FDialogContext{};
}

void UGbxDialogBlueprintLibrary::InterruptDialogInRadius(UObject* WorldContextObject, FVector Origin, float Radius) {
}

void UGbxDialogBlueprintLibrary::InterruptConversation(FDialogConversation Conversation) {
}

bool UGbxDialogBlueprintLibrary::GetDialogFlag(UObject* WorldContextObject, UDialogEnumValue* DialogEnumValue) {
    return false;
}

TArray<FString> UGbxDialogBlueprintLibrary::GetDialogContextParameterSummary(const FDialogContext& Context) {
    return TArray<FString>();
}

void UGbxDialogBlueprintLibrary::GetDialogContextParameter(const FDialogContext& Context, UDialogParameter* Parameter, UObject*& ObjectValue, float& FloatValue, bool& bBoolValue) {
}

EGbxDialogConversationStatus UGbxDialogBlueprintLibrary::GetConversationStatus(FDialogConversation Conversation) {
    return EGbxDialogConversationStatus::NotFound;
}

bool UGbxDialogBlueprintLibrary::FinishTriggerDialog(UObject* WorldContextObject, UDialogEvent* Event, FDialogContext& Context, FDialogConversation ContinueConversation, FDialogConversation& Conversation, float StartDelay, int32& SequenceID) {
    return false;
}

bool UGbxDialogBlueprintLibrary::FinishSpeak(UObject* WorldContextObject, const FDialogTimeSlotReference TimeSlotRef, UGbxDialogComponent* OptionalSpeaker, FDialogContext& Context, FDialogConversation ContinueConversation, FDialogConversation& Conversation, float StartDelay, int32& SequenceID, float OverrideMaxWait) {
    return false;
}

bool UGbxDialogBlueprintLibrary::FindOrCreateNamedSpeaker(UDialogNameTag* NameTag, bool bIncludePureEchoSpeakers, bool bCreateIfNotFound, UGbxDialogComponent*& Speaker) {
    return false;
}

bool UGbxDialogBlueprintLibrary::EnqueueDialogPerformance(UObject* WorldContextObject, UGbxDialogComponent* Speaker, UDialogPerformanceData* Performance, float StartDelay, FDialogConversation ContinueConversation, FDialogConversation& Conversation, int32& DialogPlaybackSequence) {
    return false;
}

void UGbxDialogBlueprintLibrary::DeactivateDialogScript(UObject* WorldContextObject, TSoftObjectPtr<UDialogScriptData> SoftScript, UDialogScriptData* Script) {
}

EDialogDecisionTestResult UGbxDialogBlueprintLibrary::ConvertBoolToDialogTestResult(bool bValue) {
    return EDialogDecisionTestResult::ConditionIsTrue;
}

void UGbxDialogBlueprintLibrary::CancelDialogBlockingHold(UObject* WorldContextObject, FName HoldName) {
}

void UGbxDialogBlueprintLibrary::BindToDialogSequenceFinished(UObject* WorldContextObject, int32 PlayingSequenceID, FOnDialogSequenceFinished Delegate) {
}

void UGbxDialogBlueprintLibrary::BindToDialogNotify(UObject* WorldContextObject, int32 PlayingSequenceID, FName NotifyName, FOnDialogPerformanceNotify Delegate) {
}

void UGbxDialogBlueprintLibrary::ActivateDialogScript(UObject* WorldContextObject, TSoftObjectPtr<UDialogScriptData> SoftScript, UDialogScriptData* Script) {
}

UGbxDialogBlueprintLibrary::UGbxDialogBlueprintLibrary() {
}

