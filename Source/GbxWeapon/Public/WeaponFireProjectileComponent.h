#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponFireComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeInteger -FallbackName=GbxAttributeInteger
#include "AttributeBaseValueData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "WeaponFireProjectileComponent.generated.h"

class AActor;
class UFiringPattern;
class UCurveFloat;
class ULightProjectileData;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponFireProjectileComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeInteger ProjectilesPerShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    FGbxAttributeFloat ProjectileSpeedScale;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* ShotStrengthProjectileSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> ProjectileTemplate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAttributeBaseValueData> ProjectileBaseValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ULightProjectileData> LightProjectileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFiringPattern* FiringPatternData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Range;
    
    UWeaponFireProjectileComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<AActor> GetShotProjectileData() const;
    
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<ULightProjectileData> GetShotLightProjectileData() const;
    
};

