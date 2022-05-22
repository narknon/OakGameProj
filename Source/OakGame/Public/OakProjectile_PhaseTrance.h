#pragma once
#include "CoreMinimal.h"
#include "OakProjectile_ActionAbility.h"
#include "PhaseTranceActivationComboData.h"
#include "Engine/EngineTypes.h"
#include "OakProjectile_PhaseTrance.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS()
class AOakProjectile_PhaseTrance : public AOakProjectile_ActionAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bWantsOverlappedEvents;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWantsOverlappedEnemyEvents;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWantsOverlappedFriendlyEvents;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWantsOverlappedNeutralEvents;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPhaseTranceActivationComboData ActivationComboData;
    
public:
    AOakProjectile_PhaseTrance();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnOverlappedNeutral(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOverlappedFriendly(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOverlappedEnemy(const FHitResult& HitResult);
    
private:
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitResult);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UPrimitiveComponent* GetOverlapComponent() const;
    
};

