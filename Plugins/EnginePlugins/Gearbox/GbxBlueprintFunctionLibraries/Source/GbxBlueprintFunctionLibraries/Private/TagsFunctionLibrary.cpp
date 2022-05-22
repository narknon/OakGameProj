#include "TagsFunctionLibrary.h"

class UActorComponent;
class AActor;

void UTagsFunctionLibrary::RemoveTagFromComponent(UActorComponent* Target, FName Tag) {
}

void UTagsFunctionLibrary::RemoveTagFromActor(AActor* Target, FName Tag) {
}

bool UTagsFunctionLibrary::ComponentContainsTag(const UActorComponent* Target, FName Tag) {
    return false;
}

TArray<FName> UTagsFunctionLibrary::CompareComponentTags(const UActorComponent* FirstComponent, const UActorComponent* SecondComponent, ECompareTag& Branches) {
    return TArray<FName>();
}

TArray<FName> UTagsFunctionLibrary::CompareActorTagsWithComponent(const AActor* Actor, const UActorComponent* Component, ECompareTag& Branches) {
    return TArray<FName>();
}

TArray<FName> UTagsFunctionLibrary::CompareActorTags(const AActor* FirstActor, const AActor* SecondActor, ECompareTag& Branches) {
    return TArray<FName>();
}

void UTagsFunctionLibrary::AddTagToComponent(UActorComponent* Target, FName Tag) {
}

void UTagsFunctionLibrary::AddTagToActor(AActor* Target, FName Tag) {
}

bool UTagsFunctionLibrary::ActorContainsTag(const AActor* Target, FName Tag) {
    return false;
}

UTagsFunctionLibrary::UTagsFunctionLibrary() {
}

