#include "GbxActionBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UGbxAction;
class UGbxAction_Loop;
class AActor;
class UObject;

void UGbxActionBlueprintLibrary::StopLoopingActionClass(TSubclassOf<UGbxAction_Loop> ActionClass, AActor* Target) {
}

void UGbxActionBlueprintLibrary::StopActionSlot(const FName ActionSlotName, AActor* Target) {
}

void UGbxActionBlueprintLibrary::StopActions(AActor* Target) {
}

void UGbxActionBlueprintLibrary::StopActionClass(TSubclassOf<UGbxAction> ActionClass, AActor* Target) {
}

TArray<FGbxActionRegister> UGbxActionBlueprintLibrary::SetObjectGbxActionRegister(TArray<FGbxActionRegister>& GbxActionRegisters, FName RegisterKey, UObject* Value, bool bReplicates) {
    return TArray<FGbxActionRegister>();
}

TArray<FGbxActionRegister> UGbxActionBlueprintLibrary::SetNameGbxActionRegister(TArray<FGbxActionRegister>& GbxActionRegisters, FName RegisterKey, FName Value, bool bReplicates) {
    return TArray<FGbxActionRegister>();
}

TArray<FGbxActionRegister> UGbxActionBlueprintLibrary::SetIntGbxActionRegister(TArray<FGbxActionRegister>& GbxActionRegisters, FName RegisterKey, int32 Value, bool bReplicates) {
    return TArray<FGbxActionRegister>();
}

TArray<FGbxActionRegister> UGbxActionBlueprintLibrary::SetFloatGbxActionRegister(TArray<FGbxActionRegister>& GbxActionRegisters, FName RegisterKey, float Value, bool bReplicates) {
    return TArray<FGbxActionRegister>();
}

void UGbxActionBlueprintLibrary::K2_UpdateActionPlayRate(UGbxAction* Action, float PlayRate) {
}

void UGbxActionBlueprintLibrary::K2_UpdateActionDirection(UGbxAction* Action, FVector Direction) {
}

void UGbxActionBlueprintLibrary::K2_StopActionObj(UGbxAction* Action, AActor* Target) {
}

void UGbxActionBlueprintLibrary::K2_ShowGbxActionScreenLogs(bool bShowLogsOnScreen) {
}

void UGbxActionBlueprintLibrary::K2_Resume(UGbxAction* Action) {
}

void UGbxActionBlueprintLibrary::K2_ReplicatedProceedToNextSection(UGbxAction* Action) {
}

void UGbxActionBlueprintLibrary::K2_ReplicatedJumpToNextSection(UGbxAction* Action) {
}

void UGbxActionBlueprintLibrary::K2_ProceedToNextSection(UGbxAction* Action) {
}

void UGbxActionBlueprintLibrary::K2_Pause(UGbxAction* Action) {
}

void UGbxActionBlueprintLibrary::K2_JumpToNextSection(UGbxAction* Action) {
}

float UGbxActionBlueprintLibrary::K2_GetTimeRemaining(UGbxAction* Target) {
    return 0.0f;
}

float UGbxActionBlueprintLibrary::K2_GetMaxCurrentTime(UGbxAction* Action) {
    return 0.0f;
}

UGbxAction* UGbxActionBlueprintLibrary::K2_GetActionByClass(TSubclassOf<UGbxAction> ActionClass, AActor* Target) {
    return NULL;
}

FString UGbxActionBlueprintLibrary::GetSummary_AnimActionDef(const FAnimActionDef& AnimActionDef) {
    return TEXT("");
}

TSubclassOf<UGbxAction> UGbxActionBlueprintLibrary::GetKeyedActionClass(FGameplayTag ActionKey, AActor* Target) {
    return NULL;
}

UGbxActionBlueprintLibrary::UGbxActionBlueprintLibrary() {
}

