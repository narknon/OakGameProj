#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OnDummyProjectileSpawnedSignatureDelegate.h"
#include "WeaponFireProjectileComponent.h"
#include "DummyProjectileInfo.h"
#include "OnCurrentProjectileIndexChangedSignatureDelegate.h"
#include "OakVehicleWeaponFireProjectileComponent.generated.h"

class UGbxDataAsset;
class AActor;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakVehicleWeaponFireProjectileComponent : public UWeaponFireProjectileComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDummyProjectileInfo> DummyProjectiles;
    
    UPROPERTY(EditAnywhere)
    float DelayDummyProjectile;
    
    UPROPERTY(Transient)
    UGbxDataAsset* ProjectileData;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AActor>> ProjectileTypes;
    
    UPROPERTY(BlueprintAssignable)
    FOnCurrentProjectileIndexChangedSignature OnCurrentProjectileIndexChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnDummyProjectileSpawnedSignature OnDummyProjectileSpawned;
    
public:
    UOakVehicleWeaponFireProjectileComponent();
    UFUNCTION(BlueprintCallable)
    void SpawnDummyProjectile(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAllDummyProjectiles();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFiredProjectileIndex(int32 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void PlayDummyProjectileTransitOut(int32 Index, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayDummyProjectileTransitIn(int32 Index, float PlayRate);
    
protected:
    UFUNCTION()
    void NotifyHiddenDummyProjectile(bool Hidden);
    
    UFUNCTION()
    void HideDummyProjectile();
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetDummyProjectile(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentFiredProjectileIndex() const;
    
    UFUNCTION(BlueprintCallable)
    int32 CycleCurrentFiredProjectileIndex(int32 Step);
    
};

