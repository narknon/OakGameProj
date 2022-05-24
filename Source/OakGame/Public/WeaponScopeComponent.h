#pragma once
#include "CoreMinimal.h"
#include "WeaponSightComponent.h"
#include "UObject/NoExportTypes.h"
#include "WeaponEffectQueryData.h"
#include "WeaponScopeComponent.generated.h"

class UParticleSystem;
class UStaticMesh;
class UWeaponHeatComponent;
class UStaticMeshComponent;
class UWeaponShieldComponent;
class UWeaponChargeComponent;
class AWeapon;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponScopeComponent : public UWeaponSightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bHideWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* ScopeMesh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ScopeMeshOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScopeMeshScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScopeMeshDepthScale;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScopeScreenParticle;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* CloseScopeScreenParticle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ScopeScreenTransitionTime;
    
    UPROPERTY(EditAnywhere)
    uint8 bHasAmmoCounter: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHasWeaponShieldIndicator: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHasTargetLockIndicator: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHasHeatIndicator: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHasChargeIndicator: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bInheritAdditionalMaterialParameters: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FWeaponEffectQueryData ZoomTransitionEffectQueryData;
    
protected:
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* ScopeMeshComponent;
    
    UPROPERTY(Export, Transient)
    UWeaponShieldComponent* WeaponShieldComponent;
    
    UPROPERTY(Export, Transient)
    UWeaponHeatComponent* WeaponHeatComponent;
    
    UPROPERTY(Export, Transient)
    UWeaponChargeComponent* WeaponChargeComponent;
    
public:
    UWeaponScopeComponent();
protected:
    UFUNCTION()
    void OnTargetLockChange(AWeapon* EventWeapon, bool bLockedOn);
    
    UFUNCTION()
    void OnHeatChanged();
    
    UFUNCTION()
    void OnAmmoChanged();
    
};

