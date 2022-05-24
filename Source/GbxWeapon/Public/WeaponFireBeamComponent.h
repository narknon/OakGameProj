#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponFireComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "WeaponFireBeamComponent.generated.h"

class ULightBeamData;
class UCurveFloat;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponFireBeamComponent : public UWeaponFireComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ULightBeamData> LightBeamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFollowPlayerCrosshair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LockOnContactTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LockOnBreakRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LockOnBreakAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* DamageRampCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxAttributeFloat DamageRampScale;
    
    UWeaponFireBeamComponent();
    UFUNCTION(BlueprintNativeEvent)
    TSubclassOf<ULightBeamData> GetShotLightBeamData() const;
    
};

