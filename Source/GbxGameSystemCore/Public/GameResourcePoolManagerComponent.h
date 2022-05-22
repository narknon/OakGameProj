#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReference.h"
#include "Components/ActorComponent.h"
#include "GameResourcePool.h"
#include "InspectionInfoProvider.h"
#include "GameResourcePoolNet.h"
#include "GameResourceUserEvent.h"
#include "GameResourcePoolParamDelegateDelegate.h"
#include "GameResourcePoolManagerComponent.generated.h"

class UGameResourcePoolData;
class UGameResourceData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGameResourcePoolManagerComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGameResourcePool> ResourcePools;
    
    UPROPERTY()
    TArray<FGameResourcePool> PendingResourcePools;
    
    UPROPERTY(Replicated)
    FGameResourcePoolNet ReplicatedPoolData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UGameResourcePoolData*> InitialResourcePools;
    
    UPROPERTY()
    TArray<FGameResourceUserEvent> ResourceEvents;
    
    UGameResourcePoolManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void RemoveResourcePoolDelegate(UGameResourceData* InResourceData, FName DelegatePropertyName, FGameResourcePoolParamDelegate ScriptDelegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RecalculateAttributeInitializedPoolProperties();
    
private:
    UFUNCTION()
    void OnOwnerExperienceLevelChanged(const int32 OldExperienceLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    FGameResourcePoolReference GetResourcePoolByResource(UGameResourceData* Resource);
    
    UFUNCTION(BlueprintCallable)
    FGameResourcePoolReference CreatePool(UGameResourcePoolData* PoolData, bool bReinitializeExistingPool);
    
    UFUNCTION()
    void ClearResourcePoolDelegate(UGameResourceData* InResourceData, FName DelegatePropertyName);
    
    UFUNCTION()
    void AddResourcePoolDelegate(UGameResourceData* InResourceData, FName DelegatePropertyName, FGameResourcePoolParamDelegate ScriptDelegate);
    
    
    // Fix for true pure virtual functions not being implemented
};

