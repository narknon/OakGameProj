#pragma once
#include "CoreMinimal.h"
#include "OakActionAbility.h"
#include "UObject/NoExportTypes.h"
#include "OakLightProjectileInitializationData.h"
#include "OakActionAbility_ShoulderCannon.generated.h"

class UOakAimAssistParameters;
class AInteractiveObject;

UCLASS()
class UOakActionAbility_ShoulderCannon : public UOakActionAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UOakAimAssistParameters* CannonAimAsset;
    
private:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Cannon, meta=(AllowPrivateAccess=true))
    AInteractiveObject* Cannon;
    
public:
    UOakActionAbility_ShoulderCannon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    AInteractiveObject* TrySpawnCannon();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnCannon();
    
private:
    UFUNCTION()
    void OnRep_Cannon();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool GetShotData(const FVector& StartLocation, FOakLightProjectileInitializationData& ShotData);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CannonRemoved();
    
};

