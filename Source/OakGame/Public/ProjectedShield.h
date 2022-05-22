#pragma once
#include "CoreMinimal.h"
#include "GameResourcePoolReference.h"
#include "Components/ActorComponent.h"
#include "ReceivedDamageDetails.h"
#include "HealthType.h"
#include "ProjectedShield.generated.h"

class UDamageComponent;
class UProjectedShieldData;
class UParticleSystemComponent;
class UStaticMeshComponent;
class UWwiseAudioComponent;
class AActor;
class UGbxDamageType;
class UDamageSource;
class AController;
class UDamageCauserComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UProjectedShield : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, Transient)
    UProjectedShieldData* Data;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UParticleSystemComponent* ParticleSystem;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UWwiseAudioComponent* ProjectedAudioComponent;
    
protected:
    UPROPERTY(Transient)
    AActor* OwnerActor;
    
public:
    UProjectedShield();
    UFUNCTION(BlueprintCallable)
    void ToggleProjectedShield(bool bToggleOn);
    
    UFUNCTION(BlueprintCallable)
    void SpawnShield();
    
private:
    UFUNCTION()
    void OnTakeAnyDamageInternal(UDamageComponent* DamageReceiver, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AController* InstigatedBy, UDamageCauserComponent* DamageCauser, FReceivedDamageDetails Details);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTakeAnyDamage(UDamageComponent* DamageReceiver, float Damage, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, AController* InstigatedBy, UDamageCauserComponent* DamageCauser, FReceivedDamageDetails Details);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShieldSpawned();
    
private:
    UFUNCTION()
    void OnShieldNotDepletedInternal(FGameResourcePoolReference ResourcePool);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShieldNotDepleted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShieldLowHealth();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShieldFullHealth();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShieldDespawned();
    
private:
    UFUNCTION()
    void OnShieldDepleted(FGameResourcePoolReference ResourcePool);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShieldBreak();
    
private:
    UFUNCTION()
    void OnHealthTypeVeryLow(const FHealthType& HealthType, int32 Index);
    
    UFUNCTION()
    void OnHealthTypeNormal(const FHealthType& HealthType, int32 Index);
    
    UFUNCTION()
    void OnHealthTypeLow(const FHealthType& HealthType, int32 Index);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsShieldBroken() const;
    
    UFUNCTION(BlueprintCallable)
    void DespawnShield();
    
};

