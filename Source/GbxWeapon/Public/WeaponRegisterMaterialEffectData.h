#pragma once
#include "CoreMinimal.h"
#include "EWeaponEffectType.h"
#include "EWeaponAttachmentVisibilityType.h"
#include "EWeaponMaterialEffectBlendMode.h"
#include "AttributeInitializationData.h"
#include "WeaponRegisterMaterialEffectData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FWeaponRegisterMaterialEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EWeaponEffectType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MaterialParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EWeaponAttachmentVisibilityType> Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UseModeBitmask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWeaponMaterialEffectBlendMode BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPlayOnlyOnActiveSlot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bLoop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bApplyAttribute: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bScaleAttributeByValueOverTime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bScaleAttributeByDeltaTime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData AttributeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* ValueOverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Impulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxValue;
    
    GBXWEAPON_API FWeaponRegisterMaterialEffectData();
};

