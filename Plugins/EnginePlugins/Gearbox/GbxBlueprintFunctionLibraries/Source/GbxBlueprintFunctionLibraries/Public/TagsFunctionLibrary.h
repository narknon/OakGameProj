#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECompareTag.h"
#include "TagsFunctionLibrary.generated.h"

class UActorComponent;
class AActor;

UCLASS(BlueprintType)
class UTagsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTagsFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void RemoveTagFromComponent(UActorComponent* Target, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveTagFromActor(AActor* Target, FName Tag);
    
    UFUNCTION(BlueprintPure)
    static bool ComponentContainsTag(const UActorComponent* Target, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> CompareComponentTags(const UActorComponent* FirstComponent, const UActorComponent* SecondComponent, ECompareTag& Branches);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> CompareActorTagsWithComponent(const AActor* Actor, const UActorComponent* Component, ECompareTag& Branches);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> CompareActorTags(const AActor* FirstActor, const AActor* SecondActor, ECompareTag& Branches);
    
    UFUNCTION(BlueprintCallable)
    static void AddTagToComponent(UActorComponent* Target, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void AddTagToActor(AActor* Target, FName Tag);
    
    UFUNCTION(BlueprintPure)
    static bool ActorContainsTag(const AActor* Target, FName Tag);
    
};

