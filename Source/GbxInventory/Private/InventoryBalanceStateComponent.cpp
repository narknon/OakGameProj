#include "InventoryBalanceStateComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class APawn;
class UGbxDamageType;
class UInventoryRarityData;
class UManufacturerData;
class UInventoryPartData;
class UParticleSystem;
class UWwiseEvent;
class UInventoryData;
class UInventoryBalanceData;
class UInventoryGenericPartData;
class UInventoryCustomizationPartData;
class AActor;
class USceneComponent;

void UInventoryBalanceStateComponent::PostBeginPlay() {
}

void UInventoryBalanceStateComponent::OnRep_ReplicatedUIStats() {
}

void UInventoryBalanceStateComponent::NotifyUnequipped(APawn* OldInstigator) {
}

void UInventoryBalanceStateComponent::NotifyEquipped(APawn* NewInstigator) {
}

void UInventoryBalanceStateComponent::NotifyAttached(APawn* Instigator) {
}

TSubclassOf<UGbxDamageType> UInventoryBalanceStateComponent::K2_GetDamageType_Implementation() const {
    return NULL;
}

bool UInventoryBalanceStateComponent::IsManufactureredBy(const UManufacturerData* Manufacturer) const {
    return false;
}

uint8 UInventoryBalanceStateComponent::GetReRollCount() const {
    return 0;
}

TArray<UInventoryPartData*> UInventoryBalanceStateComponent::GetPartList() const {
    return TArray<UInventoryPartData*>();
}

int32 UInventoryBalanceStateComponent::GetMonetaryValue() const {
    return 0;
}

UManufacturerData* UInventoryBalanceStateComponent::GetManufacturer() const {
    return NULL;
}

int32 UInventoryBalanceStateComponent::GetInventoryScoreValue() const {
    return 0;
}

UParticleSystem* UInventoryBalanceStateComponent::GetInventoryRarityLootBeamOverride() const {
    return NULL;
}

float UInventoryBalanceStateComponent::GetInventoryRarityLootBeamHeight() const {
    return 0.0f;
}

UWwiseEvent* UInventoryBalanceStateComponent::GetInventoryRarityLootAudioStinger() const {
    return NULL;
}

EDropLifeSpanType UInventoryBalanceStateComponent::GetInventoryRarityLifeSpanType() const {
    return EDropLifeSpanType::DROP_VeryShortLived;
}

float UInventoryBalanceStateComponent::GetInventoryRarityLifeSpan() const {
    return 0.0f;
}

FString UInventoryBalanceStateComponent::GetInventoryRarityFrameName() const {
    return TEXT("");
}

FText UInventoryBalanceStateComponent::GetInventoryRarityDisplayName() const {
    return FText::GetEmpty();
}

UInventoryRarityData* UInventoryBalanceStateComponent::GetInventoryRarityData() const {
    return NULL;
}

FLinearColor UInventoryBalanceStateComponent::GetInventoryRarityColorOutline() const {
    return FLinearColor{};
}

FLinearColor UInventoryBalanceStateComponent::GetInventoryRarityColorFX() const {
    return FLinearColor{};
}

bool UInventoryBalanceStateComponent::GetInventoryDisplayRarityOutline() const {
    return false;
}

UInventoryData* UInventoryBalanceStateComponent::GetInventoryData() const {
    return NULL;
}

UInventoryBalanceData* UInventoryBalanceStateComponent::GetInventoryBalanceData() const {
    return NULL;
}

TArray<UInventoryGenericPartData*> UInventoryBalanceStateComponent::GetGenericPartList() const {
    return TArray<UInventoryGenericPartData*>();
}

FText UInventoryBalanceStateComponent::GetDisplayName() const {
    return FText::GetEmpty();
}

TSubclassOf<UGbxDamageType> UInventoryBalanceStateComponent::GetDamageType() const {
    return NULL;
}

TArray<UInventoryCustomizationPartData*> UInventoryBalanceStateComponent::GetCustomizationPartList() const {
    return TArray<UInventoryCustomizationPartData*>();
}

void UInventoryBalanceStateComponent::CloneAppearance(AActor* DestActor, USceneComponent* ParentComp, bool bAbsoluteScale) const {
}

void UInventoryBalanceStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryBalanceStateComponent, PackedReplicationData);
    DOREPLIFETIME(UInventoryBalanceStateComponent, MonetaryValue);
    DOREPLIFETIME(UInventoryBalanceStateComponent, InventoryScoreValue);
    DOREPLIFETIME(UInventoryBalanceStateComponent, ReRollCount);
    DOREPLIFETIME(UInventoryBalanceStateComponent, ReplicatedUIStats);
}

UInventoryBalanceStateComponent::UInventoryBalanceStateComponent() {
    this->MonetaryValueModifierTotal = 0.00f;
    this->MonetaryValue = 0;
    this->InventoryScoreModifierTotal = 0.00f;
    this->InventoryScoreValue = 0;
    this->InventoryData = NULL;
    this->InventoryBalanceData = NULL;
    this->ManufacturerData = NULL;
    this->ReRollCount = 0;
    this->GestaltData = NULL;
}

