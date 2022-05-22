#include "GameplayTask_ScriptedMoveToLevelSequence.h"

class AActor;
class UGameplayTask_ScriptedMoveToLevelSequence;
class AGbxLevelSequenceActor;
class UStanceDataProvider;

void UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceStopped() {
}

void UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceFinished() {
}

UGameplayTask_ScriptedMoveToLevelSequence* UGameplayTask_ScriptedMoveToLevelSequence::BeginScriptedMoveToLevelSequenceMulti(const TArray<AActor*>& Targets, AGbxLevelSequenceActor* NewLevelSequenceActor, bool bStartSequence, UStanceDataProvider* OptionalStance) {
    return NULL;
}

UGameplayTask_ScriptedMoveToLevelSequence* UGameplayTask_ScriptedMoveToLevelSequence::BeginScriptedMoveToLevelSequence(AActor* Target, AGbxLevelSequenceActor* NewLevelSequenceActor, bool bStartSequence, UStanceDataProvider* OptionalStance) {
    return NULL;
}

UGameplayTask_ScriptedMoveToLevelSequence::UGameplayTask_ScriptedMoveToLevelSequence() {
    this->LevelSequenceActor = NULL;
    this->StanceProvider = NULL;
}

