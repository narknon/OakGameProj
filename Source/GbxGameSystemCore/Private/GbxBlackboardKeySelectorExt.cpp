#include "GbxBlackboardKeySelectorExt.h"

class AActor;
class UBlackboardComponent;
class UProperty;
class UObject;

void UGbxBlackboardKeySelectorExt::SetValueAsVector(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, FVector Value) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsTargetActorInfo(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, const FTargetActorInfo& Value) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsString(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, const FString& Value) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsRotator(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, FRotator Value) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsObject(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, UObject* Value) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsName(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, FName Value) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsInt(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, int32 Value) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsFloat(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, float Value) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsFlag(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, const bool Value, float Duration) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsEnum(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, uint8 Value) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsClass(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, UClass* Value) {
}

void UGbxBlackboardKeySelectorExt::SetValueAsBool(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent, bool Value) {
}

FVector UGbxBlackboardKeySelectorExt::GetValueAsVector(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return FVector{};
}

FTargetActorInfo UGbxBlackboardKeySelectorExt::GetValueAsTargetActorInfo(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return FTargetActorInfo{};
}

FString UGbxBlackboardKeySelectorExt::GetValueAsString(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return TEXT("");
}

FRotator UGbxBlackboardKeySelectorExt::GetValueAsRotator(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return FRotator{};
}

UObject* UGbxBlackboardKeySelectorExt::GetValueAsObject(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return NULL;
}

FName UGbxBlackboardKeySelectorExt::GetValueAsName(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return NAME_None;
}

int32 UGbxBlackboardKeySelectorExt::GetValueAsInt(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return 0;
}

float UGbxBlackboardKeySelectorExt::GetValueAsFloat(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return 0.0f;
}

uint8 UGbxBlackboardKeySelectorExt::GetValueAsEnum(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return 0;
}

UClass* UGbxBlackboardKeySelectorExt::GetValueAsClass(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return NULL;
}

bool UGbxBlackboardKeySelectorExt::GetValueAsBool(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return false;
}

AActor* UGbxBlackboardKeySelectorExt::GetValueAsActor(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
    return NULL;
}

FString UGbxBlackboardKeySelectorExt::GetPropertyDescription(const FGbxBlackboardKeySelector& BBKey, UProperty* Property) {
    return TEXT("");
}

void UGbxBlackboardKeySelectorExt::ClearValue(const FGbxBlackboardKeySelector& Key, UBlackboardComponent* BlackboardComponent) {
}

UGbxBlackboardKeySelectorExt::UGbxBlackboardKeySelectorExt() {
}

