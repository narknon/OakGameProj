#include "GbxAttributesComponent.h"
#include "Net/UnrealNetwork.h"

bool UGbxAttributesComponent::IsAttributeSetClassUnrelatedToExistingSet(const UClass* AttributeSetClass) const {
    return false;
}

void UGbxAttributesComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGbxAttributesComponent, AttributeSets);
}

UGbxAttributesComponent::UGbxAttributesComponent() {
}

