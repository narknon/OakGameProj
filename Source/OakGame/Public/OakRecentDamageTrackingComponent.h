#pragma once
#include "CoreMinimal.h"
#include "TriggeredDamagePresentation.h"
#include "RecentDamageTrackingComponent.h"
#include "RecentlyResistedAttackData.h"
#include "RecentIncomingDamageData.h"
#include "OakRecentDamageTrackingComponent.generated.h"

class UScreenParticleManagerComponent;
class UOakDamageGlobalsData;
class UParticleSystemComponent;
class UStaticMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakRecentDamageTrackingComponent : public URecentDamageTrackingComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UOakDamageGlobalsData* Globals;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* DamageNumberParticleComponent;
    
    UPROPERTY(Export, Transient)
    UScreenParticleManagerComponent* ScreenParticleManagerComponent;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* IncomingDamageParticleComponent_Health;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* IncomingDamageParticleComponent_Shield;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* IncomingDamageParticleComponent_Armor;
    
    UPROPERTY(Transient)
    FRecentlyResistedAttackData RecentlyResistedAttacks[16];
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RecentIncomingDamageData)
    TArray<FRecentIncomingDamageData> ServerRecentIncomingDamageData;
    
    UPROPERTY(Transient)
    TArray<FRecentIncomingDamageData> ClientRecentIncomingDamageData;
    
    UPROPERTY(Export, Transient)
    TArray<UStaticMeshComponent*> RecentIncomingHealthDamageComponents;
    
    UPROPERTY(Export, Transient)
    TArray<UStaticMeshComponent*> RecentIncomingShieldDamageComponents;
    
    UPROPERTY(Export, Transient)
    TArray<UStaticMeshComponent*> RecentIncomingArmorDamageComponents;
    
public:
    UOakRecentDamageTrackingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_RecentIncomingDamageData();
    
    UFUNCTION(Client, Unreliable)
    void ClientPlayDamagePresentation(const FTriggeredDamagePresentation& Presentation);
    
};

