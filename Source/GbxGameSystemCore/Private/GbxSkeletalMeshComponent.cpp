#include "GbxSkeletalMeshComponent.h"
#include "Net/UnrealNetwork.h"

class USkeletalMeshComponent;
class UGestaltPartData_Mesh;
class UGestaltPartListData;
class UGbxCustomizationTargetData;
class AActor;

void UGbxSkeletalMeshComponent::ShowGestaltMeshParts(const TArray<UGestaltPartData_Mesh*>& Parts, bool bLocalOnly) {
}

void UGbxSkeletalMeshComponent::ShowGestaltMeshPart(const UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly) {
}

void UGbxSkeletalMeshComponent::SetUpdateOverrideValues(const TArray<float>& UpdateRateOverrides, bool bEnableOverrideProperties) {
}

void UGbxSkeletalMeshComponent::SetParentAnimationComponent(USkeletalMeshComponent* ParentComponent) {
}

void UGbxSkeletalMeshComponent::SetGestaltPartList(UGestaltPartListData* NewGestaltPartList) {
}

void UGbxSkeletalMeshComponent::RunPoseTest() {
}

void UGbxSkeletalMeshComponent::OnRep_GlobalBoneMod() {
}

void UGbxSkeletalMeshComponent::OnRep_GestaltMeshParts() {
}

void UGbxSkeletalMeshComponent::LinkSkelMeshAnimInstances(const TArray<USkeletalMeshComponent*>& InLinkedSkelMeshComponents) {
}

void UGbxSkeletalMeshComponent::LinkSkelMeshAnimInstance(USkeletalMeshComponent* InLinkedSkelMeshComponent) {
}

bool UGbxSkeletalMeshComponent::IsGestaltMeshPartVisible(const UGestaltPartData_Mesh* GestaltMeshPart) const {
    return false;
}

bool UGbxSkeletalMeshComponent::IsCustomizationTargetFor(UGbxCustomizationTargetData* TargetToTest) const {
    return false;
}

void UGbxSkeletalMeshComponent::HideGestaltMeshParts(const TArray<UGestaltPartData_Mesh*>& Parts, bool bLocalOnly) {
}

void UGbxSkeletalMeshComponent::HideGestaltMeshPart(const UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly) {
}

TArray<float> UGbxSkeletalMeshComponent::GetUpdateOverrideValues() const {
    return TArray<float>();
}

void UGbxSkeletalMeshComponent::GetAvailableBoneNames(TArray<FName>& Array) const {
}

void UGbxSkeletalMeshComponent::CopyGestaltPartList(AActor* GestaltPartListSource) {
}

void UGbxSkeletalMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGbxSkeletalMeshComponent, GestaltPartList);
    DOREPLIFETIME(UGbxSkeletalMeshComponent, ReplicatedGestaltParts);
    DOREPLIFETIME(UGbxSkeletalMeshComponent, BoneModifyProfileData);
    DOREPLIFETIME(UGbxSkeletalMeshComponent, GlobalBMPRepArray);
}

UGbxSkeletalMeshComponent::UGbxSkeletalMeshComponent() {
    this->GestaltPartList = NULL;
    this->GestaultSeed = -1;
    this->bAllowDynamicallyAddedForwardDynamicsNodes = true;
    this->BoneModifyProfile = NULL;
    this->bReplicateBoneMods = true;
    this->LastUpdateTime = 0.00f;
    this->NoBodyMass = 0.00f;
    this->ImpulseMultiplier = 0.00f;
    this->DefaultImpactData = NULL;
    this->AnimBPProfile = NULL;
    this->bGaitScalingOverride = false;
    this->bUseAggregateSimulationSleepCheck = true;
    this->AggregateSimulationSleepCheckSeconds = 5.00f;
    this->AggregateSimulationSleepCheckDistance = 10.00f;
    this->bOverrideUpdateRateParameters = false;
}

