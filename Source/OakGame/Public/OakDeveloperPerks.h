#pragma once
#include "CoreMinimal.h"
#include "DeveloperPerk.h"
#include "Components/ActorComponent.h"
#include "OakDeveloperPerks.generated.h"

class UGbxInventoryCategoryData;
class UEnum;
class UItemPoolData;
class AOakPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakDeveloperPerks : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDeveloperPerk> Perks;
    
    UPROPERTY()
    UEnum* PerkTypeEnum;
    
    UOakDeveloperPerks();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnlockWeaponTrinkets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnlockWeaponSkins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnlockVehicleParts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UnlockCustomizations() const;
    
    UFUNCTION(BlueprintCallable)
    void SpawnItems(const TArray<UItemPoolData*>& ItemPools, int32 NumItems);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUnlockVehicleParts() const;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpawnItems(const TArray<UItemPoolData*>& ItemPools, int32 NumItems);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerLoaded() const;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerKillAllEnemies() const;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerGrantLevels(uint8 NumLevels) const;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerGiveCurrency(UGbxInventoryCategoryData* CurrencyType, int32 Amount) const;
    
    UFUNCTION()
    UEnum* PerkTypeEnumFunc();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeveloperPerkActivated(uint8 Perk);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Loaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void KillAllEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GrantLevels(uint8 NumLevels) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GiveCurrency(UGbxInventoryCategoryData* CurrencyType, int32 Amount) const;
    
private:
    UFUNCTION(BlueprintPure)
    AOakPlayerController* GetOwnerOakPlayerController() const;
    
};

