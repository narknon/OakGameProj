#pragma once
#include "CoreMinimal.h"
#include "BlackJackCardDefinition.h"
#include "Components/ActorComponent.h"
#include "BlackJackEventDelegate.h"
#include "BlackJackComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UBlackJackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBlackJackEvent OnCardUpdated;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FBlackJackCardDefinition> CardDefinitions;
    
    UPROPERTY(ReplicatedUsing=OnRep_CurrentCards)
    TArray<int32> IndicesOfCurrentCards;
    
public:
    UBlackJackComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool ShouldOpenChest();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void OpenChest();
    
private:
    UFUNCTION()
    void OnRep_CurrentCards();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetNbOfCard();
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentHandValue();
    
    UFUNCTION(BlueprintPure)
    int32 GetCardValueIndexAtIndex(int32 Index);
    
    UFUNCTION(BlueprintPure)
    int32 GetCardSuitIndexAtIndex(int32 Index);
    
    UFUNCTION(BlueprintPure)
    FString GetCardAtIndex(int32 Index);
    
    UFUNCTION(BlueprintPure)
    bool CanUseOpenChest();
    
    UFUNCTION(BlueprintPure)
    bool CanUseAddCard();
    
    UFUNCTION(BlueprintCallable)
    void AddCard();
    
};

