#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "GbxAbilityManagerComponentListLock.h"
#include "GbxAbilitySpec.h"
#include "GbxAbilityManagerComponent.generated.h"

class UGbxAbility;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXABILITIES_API UGbxAbilityManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UGbxAbility*> Abilities;
    
    UPROPERTY(Transient)
    TArray<UGbxAbility*> ReplicatedAbilities;
    
    UPROPERTY(Transient)
    TArray<UGbxAbility*> PendingReplicatedAbilities;
    
    UPROPERTY(Transient)
    TMap<TSubclassOf<UGbxAbility>, UGbxAbility*> RegisteredAbilities;
    
    UPROPERTY(Transient)
    FGbxAbilityManagerComponentListLock ListLock;
    
public:
    UGbxAbilityManagerComponent();
    UFUNCTION(BlueprintCallable)
    bool RemoveAbility(TSubclassOf<UGbxAbility> AbilityClass);
    
    UFUNCTION(BlueprintPure)
    bool HasAbility(TSubclassOf<UGbxAbility> AbilityClass) const;
    
    UFUNCTION(BlueprintPure)
    UGbxAbility* FindAbility(TSubclassOf<UGbxAbility> AbilityClass) const;
    
    UFUNCTION(BlueprintCallable)
    UGbxAbility* AddAbility(const FGbxAbilitySpec& Spec);
    
};

