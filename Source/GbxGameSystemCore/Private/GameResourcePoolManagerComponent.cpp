#include "GameResourcePoolManagerComponent.h"
#include "Net/UnrealNetwork.h"

class UGameResourceData;
class UGameResourcePoolData;

void UGameResourcePoolManagerComponent::RemoveResourcePoolDelegate(UGameResourceData* InResourceData, FName DelegatePropertyName, FGameResourcePoolParamDelegate ScriptDelegate) {
}

void UGameResourcePoolManagerComponent::RecalculateAttributeInitializedPoolProperties() {
}

void UGameResourcePoolManagerComponent::OnOwnerExperienceLevelChanged(const int32 OldExperienceLevel) {
}

FGameResourcePoolReference UGameResourcePoolManagerComponent::GetResourcePoolByResource(UGameResourceData* Resource) {
    return FGameResourcePoolReference{};
}

FGameResourcePoolReference UGameResourcePoolManagerComponent::CreatePool(UGameResourcePoolData* PoolData, bool bReinitializeExistingPool) {
    return FGameResourcePoolReference{};
}

void UGameResourcePoolManagerComponent::ClearResourcePoolDelegate(UGameResourceData* InResourceData, FName DelegatePropertyName) {
}

void UGameResourcePoolManagerComponent::AddResourcePoolDelegate(UGameResourceData* InResourceData, FName DelegatePropertyName, FGameResourcePoolParamDelegate ScriptDelegate) {
}

void UGameResourcePoolManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameResourcePoolManagerComponent, ReplicatedPoolData);
}

UGameResourcePoolManagerComponent::UGameResourcePoolManagerComponent() {
}

