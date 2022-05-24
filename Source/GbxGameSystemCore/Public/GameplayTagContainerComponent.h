#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameplayTagAssetInterface.h"
#include "InspectionInfoProvider.h"
#include "GameplayTagContainer.h"
#include "EContainsTagComponent.h"
#include "GameplayTagContainerComponent.generated.h"

class AActor;
class UGameplayTagContainerComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGameplayTagContainerComponent : public UActorComponent, public IGameplayTagAssetInterface, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer TagContainer;
    
    UGameplayTagContainerComponent();
    UFUNCTION(BlueprintCallable)
    static UGameplayTagContainerComponent* GetGameplayTagContainerFromActor(const AActor* Actor, EContainsTagComponent& Branches);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& NewTagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

