#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReference.h"
#include "WeaponAmmoComponent.h"
#include "EAmmoRegenType.h"
#include "AttributeInitializationData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "WeaponAmmoPoolComponent.generated.h"

class UGameResourceData;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponAmmoPoolComponent : public UWeaponAmmoComponent {
    GENERATED_BODY()
public:
protected:
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
    uint8 bInfiniteAmmo: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bInfiniteAmmoForAI: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCreateAmmoResourceForAI: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bGiveAmmoOnPickup: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UGameResourceData* ResourceData;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData PickupAmmoFormula;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAmmoRegenType AmmoRegenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float AmmoRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    float ConsumeAmmoRegenDelay;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FGameResourcePoolReference ResourcePool;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ServerSyncedLoadedAmmo)
    int32 ServerSyncedLoadedAmmo;
    
public:
    UWeaponAmmoPoolComponent();
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

