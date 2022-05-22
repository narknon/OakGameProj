#pragma once
#include "CoreMinimal.h"
#include "WeaponSightComponent.h"
#include "WeaponRegisterAttachmentEffectData.h"
#include "WeaponRedDotComponent.generated.h"

class UMaterialInstance;
class UMaterialInstanceDynamic;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWeaponRedDotComponent : public UWeaponSightComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInstance* Material;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName MaterialParamName;
    
    UPROPERTY(EditAnywhere)
    FWeaponRegisterAttachmentEffectData EffectData;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* MaterialInstance;
    
public:
    UWeaponRedDotComponent();
};

