#pragma once
#include "CoreMinimal.h"
#include "BalanceStateComponent.h"
#include "EPlayerExperienceSource.h"
#include "EPlayerExperienceType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "PlayerBalanceStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPlayerBalanceStateComponent : public UBalanceStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimplePlayerBalanceEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPlayerUncappedExpAddedEvent, const int32, ExperienceAdded, EPlayerExperienceSource, Source, EPlayerExperienceType, Type);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPlayerExpAddedEvent, const int32, ExperienceAdded, EPlayerExperienceSource, Source, EPlayerExperienceType, Type);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerBalanceEvent, const int32, OldExperienceLevel, const int32, NewExperienceLevel);
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Experience)
    int32 Experience;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_UncappedExperience)
    uint32 UncappedExperience;
    
protected:
    UPROPERTY(Transient)
    FGbxAttributeFloat CombatExperienceScale;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat MissionExperienceScale;
    
    UPROPERTY(Transient)
    FGbxAttributeFloat AllExperienceScale;
    
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerBalanceEvent OnLevelUp;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerExpAddedEvent OnExperienceAdded;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerUncappedExpAddedEvent OnUncappedExperienceAdded;
    
    UPlayerBalanceStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_UncappedExperience(uint32 PreviousUncappedExperience);
    
    UFUNCTION()
    void OnRep_Experience();
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetExperience() const;
    
private:
    UFUNCTION(Client, Reliable)
    void Client_OnLevelUp(const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
    UFUNCTION(Client, Reliable)
    void Client_NotifyCheatSetExperienceLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddExperience(int32 Amount, EPlayerExperienceSource Source, EPlayerExperienceType Type);
    
};

