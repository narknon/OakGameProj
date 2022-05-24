#pragma once
#include "CoreMinimal.h"
#include "VehicleInventoryBalanceStateComponent.h"
#include "GameResourcePoolReference.h"
#include "HealthType.h"
#include "OakVehicleBalanceStateComponent.generated.h"

class UOakVehicleAspectData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakVehicleBalanceStateComponent : public UVehicleInventoryBalanceStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UOakVehicleAspectData*> VehicleAspectList;
    
public:
    UOakVehicleBalanceStateComponent();
private:
    UFUNCTION()
    void OnShieldsFilled(FGameResourcePoolReference ResourcePool);
    
    UFUNCTION()
    void OnShieldsDepleted(FGameResourcePoolReference ShieldPool);
    
    UFUNCTION()
    void OnShieldCurrentValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float CurrentValue);
    
    UFUNCTION()
    void OnHealthTypeVeryLow(const FHealthType& HealthType, int32 Index);
    
    UFUNCTION()
    void OnHealthTypeNormal(const FHealthType& HealthType, int32 Index);
    
    UFUNCTION()
    void OnHealthTypeLow(const FHealthType& HealthType, int32 Index);
    
    UFUNCTION()
    void OnHealthTypeAdded(const FHealthType& HealthType, int32 Index);
    
    UFUNCTION()
    void OnBoostStarted();
    
    UFUNCTION()
    void OnBoostFinished();
    
};

