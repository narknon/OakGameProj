#pragma once
#include "CoreMinimal.h"
#include "WeaponAmmoComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "WeaponAmmoCurrencyComponent.generated.h"

class UInventoryCategoryData;
class UInventoryListComponent;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponAmmoCurrencyComponent : public UWeaponAmmoComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UInventoryCategoryData* CurrencyType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FGbxAttributeInteger MaxLoadedAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    int32 MaxStoredAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LoadedAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    int32 StoredAmmo;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, ReplicatedUsing=OnRep_SpareAmmo)
    int32 SpareAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bInfiniteAmmoForAI: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ServerSyncedLoadedAmmo)
    int32 ServerSyncedLoadedAmmo;
    
private:
    UPROPERTY(Export, Transient)
    UInventoryListComponent* OwnerInventoryComponent;
    
public:
    UWeaponAmmoCurrencyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSendAmmoState();
    
public:
    UFUNCTION()
    void OnRep_SpareAmmo();
    
protected:
    UFUNCTION()
    void OnRep_ServerSyncedLoadedAmmo();
    
    UFUNCTION()
    void OnMaxLoadedAmmoChanged(float OldValue, float NewValue);
    
public:
    UFUNCTION()
    void OnGivenTo();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientSetLoadedAmmo(int32 NewLoadedAmmo);
    
    UFUNCTION(Client, Reliable)
    void ClientConsumeAmmo(int32 Amount);
    
};

