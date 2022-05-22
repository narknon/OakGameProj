#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelChangedEventDelegate.h"
#include "Engine/DataTable.h"
#include "InspectionInfoProvider.h"
#include "BalanceStateComponent.generated.h"

class UBalanceStateComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UBalanceStateComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle BalanceTableRowHandle;
    
    UPROPERTY(Transient)
    FDataTableRowHandle InheritedBalanceTableRowHandle;
    
private:
    UPROPERTY(Replicated, VisibleAnywhere)
    int32 GameStage;
    
    UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_ExperienceLevel)
    int32 ExperienceLevel;
    
public:
    UPROPERTY(BlueprintAssignable)
    FLevelChangedEvent OnLevelChanged;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoRefreshInheritedBalanceWhenSourceChangesLevel;
    
    UBalanceStateComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetGameStage(int32 NewGameStage);
    
    UFUNCTION(BlueprintCallable)
    void SetExperienceLevel(int32 NewExperienceLevel);
    
protected:
    UFUNCTION()
    void OnRep_ExperienceLevel(int32 OldExperienceLevel);
    
    UFUNCTION()
    void OnInheritedBalanceSourceLevelChanged(UBalanceStateComponent* InheritedBalanceStateSource, const int32 OldExperienceLevel, const int32 NewExperienceLevel);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetGameStage() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetExperienceLevel() const;
    
    UFUNCTION(BlueprintPure)
    FDataTableRowHandle GetBalanceTableRow() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

