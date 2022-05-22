#pragma once
#include "CoreMinimal.h"
#include "WeaponRegisterAttachmentEffectData.h"
#include "WeaponEffectBaseAspectData.h"
#include "WeaponAttachmentEffectAspectData.generated.h"

UCLASS(EditInlineNew)
class UWeaponAttachmentEffectAspectData : public UWeaponEffectBaseAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    FWeaponRegisterAttachmentEffectData EffectData;
    
    UPROPERTY(EditInstanceOnly)
    bool bCloneInHighDetailView;
    
public:
    UWeaponAttachmentEffectAspectData();
};

