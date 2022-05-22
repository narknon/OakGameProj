#pragma once
#include "CoreMinimal.h"
#include "GbxReplicatorProxyData.h"
#include "Components/ActorComponent.h"
#include "WeaponDebugInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "UObject/NoExportTypes.h"
#include "WeaponSwayComponent.generated.h"

class AWeapon;
class USwayPatternData;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponSwayComponent : public UActorComponent, public IWeaponDebugInterface, public IGbxReplicatorProxyData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    USwayPatternData* Pattern;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat Scale;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat AccuracyScale;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    float Lacunarity;
    
    UPROPERTY(EditAnywhere)
    float Persistence;
    
    UPROPERTY(EditAnywhere)
    float DiscWidth;
    
    UPROPERTY(EditAnywhere)
    float DiscHeight;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat ZoomScale;
    
    UPROPERTY(EditAnywhere, Replicated)
    FGbxAttributeFloat ZoomAccuracyScale;
    
    UPROPERTY(EditAnywhere)
    float ZoomSmoothingSpeed;
    
    UPROPERTY(EditAnywhere)
    float ZoomSmoothInTime_OnZoom;
    
    UPROPERTY(EditAnywhere)
    float ZoomSmoothInTime_OnFire;
    
    UPROPERTY(EditAnywhere)
    bool bApplyAccuracyScaleOnlyWhenFiring;
    
    UPROPERTY(EditAnywhere)
    float MaxAccuracyPercent;
    
    UPROPERTY(Transient)
    FRotator CurrentRotation;
    
    UPROPERTY(Transient)
    float CurrentScale;
    
private:
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
public:
    UWeaponSwayComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnZoomed();
    
    UFUNCTION()
    void OnUsed();
    
    UFUNCTION()
    void OnDetached();
    
    UFUNCTION()
    void OnAttached();
    
public:
    UFUNCTION(BlueprintPure)
    float GetSwayGoodness() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

