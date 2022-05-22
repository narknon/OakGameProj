#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InspectionInfoProvider.h"
#include "StanceChangedEventDelegate.h"
#include "StanceStack.h"
#include "StanceChangedEventArgs.h"
#include "EStanceStackLayer.h"
#include "StanceComponent.generated.h"

class UStanceType;
class UStanceData;
class UStanceDataSelector;
class UStanceDataProvider;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UStanceComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FStanceChangedEvent OnStanceChanged;
    
private:
    UPROPERTY(EditAnywhere)
    UStanceDataSelector* StanceSelector;
    
    UPROPERTY(Transient)
    FStanceStack StanceStack;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StanceState)
    FStanceChangedEventArgs StanceState;
    
    UPROPERTY(EditAnywhere)
    TMap<UStanceType*, UStanceData*> DefaultStanceMap;
    
    UPROPERTY(Transient)
    float TimeEnteredCurrentStance;
    
public:
    UStanceComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void StackStanceChangedCallback(EStanceStackLayer PreviousLayer, UStanceData* PreviousStance, EStanceStackLayer NextLayer, UStanceData* NextStance);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStanceLayer(EStanceStackLayer Layer, UStanceDataProvider* NewStance);
    
    UFUNCTION(BlueprintCallable)
    void SetBlueprintStance(UStanceDataProvider* NewStance);
    
private:
    UFUNCTION()
    void OnRep_StanceState();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInStanceType(UStanceType* Type) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInStanceLayer(EStanceStackLayer Layer) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInStance(UStanceDataProvider* Stance) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInAnimStance(UStanceDataProvider* Stance) const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeSpentInCurrentStance() const;
    
    UFUNCTION(BlueprintPure)
    EStanceStackLayer GetStanceLayer() const;
    
    UFUNCTION(BlueprintPure)
    UStanceData* GetStance() const;
    
    UFUNCTION(BlueprintPure)
    UStanceType* FindTypeForStance(UStanceData* Stance) const;
    
    UFUNCTION(BlueprintPure)
    UStanceData* FindStanceForType(UStanceType* Type) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearStanceLayer(EStanceStackLayer Layer);
    
    UFUNCTION(BlueprintCallable)
    void ClearBlueprintStance();
    
    
    // Fix for true pure virtual functions not being implemented
};

